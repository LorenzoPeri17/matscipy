/* ======================================================================
   matscipy - Python materials science tools
   https://github.com/pastewka/atomistica

   https://github.com/libAtoms/matscipy

   Copyright (2014) James Kermode, King's College London
                    Lars Pastewka, Karlsruhe Institute of Technology

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 2 of the License, or
   (at your option) any later version.
  
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
  
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
   ====================================================================== */

#ifndef __RING_STATISTICS_H_
#define __RING_STATISTICS_H_

#include "Python.h"

#ifdef __cplusplus
extern "C" {
#endif

PyObject *py_distances_on_graph(PyObject *self, PyObject *args);
PyObject *py_find_sp_rings(PyObject *self, PyObject *args);
PyObject *py_enum_sp_rings(PyObject *self, PyObject *args);

#ifdef __cplusplus
}
#endif

#endif
