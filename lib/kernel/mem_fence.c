/* OpenCL built-in library: mem_fence()

   Copyright (c) 2017 Michal Babej / Tampere University of Technology

   Permission is hereby granted, free of charge, to any person obtaining a copy
   of this software and associated documentation files (the "Software"), to deal
   in the Software without restriction, including without limitation the rights
   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
   copies of the Software, and to permit persons to whom the Software is
   furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in
   all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
   THE SOFTWARE.
*/


/* Empty implementation should work on CPU devices. */

void _CL_OVERLOADABLE
read_mem_fence (cl_mem_fence_flags flags)
{
}

void _CL_OVERLOADABLE
write_mem_fence (cl_mem_fence_flags flags)
{
}

void _CL_OVERLOADABLE
mem_fence (cl_mem_fence_flags flags)
{
}

typedef enum memory_scope
{
  memory_scope_work_item = __OPENCL_MEMORY_SCOPE_WORK_ITEM,
  memory_scope_work_group = __OPENCL_MEMORY_SCOPE_WORK_GROUP,
  memory_scope_device = __OPENCL_MEMORY_SCOPE_DEVICE,
  memory_scope_all_svm_devices = __OPENCL_MEMORY_SCOPE_ALL_SVM_DEVICES,
#if defined(cl_intel_subgroups) || defined(cl_khr_subgroups)
  memory_scope_sub_group = __OPENCL_MEMORY_SCOPE_SUB_GROUP
#endif
} memory_scope;

void _CL_OVERLOADABLE barrier (cl_mem_fence_flags flags)
    __attribute__ ((noduplicate));

void _CL_OVERLOADABLE
work_group_barrier (cl_mem_fence_flags flags) __attribute__ ((noduplicate))
{
  barrier (flags);
}

void _CL_OVERLOADABLE
work_group_barrier (cl_mem_fence_flags flags, memory_scope scope)
    __attribute__ ((noduplicate))
{
  barrier (flags);
}
