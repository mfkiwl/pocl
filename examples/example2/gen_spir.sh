clang -D_CL_DISABLE_HALF -Xclang -cl-std=CL1.2 -D__OPENCL_C_VERSION__=120 -D__OPENCL_VERSION__=120 -Dcl_khr_byte_addressable_store -Dcl_khr_global_int32_base_atomics -Dcl_khr_global_int32_extended_atomics -Dcl_khr_local_int32_base_atomics -Dcl_khr_local_int32_extended_atomics -Dcl_khr_int64 -Dcl_khr_spir -Xclang -cl-ext=-all,+cl_khr_byte_addressable_store,+cl_khr_global_int32_base_atomics,+cl_khr_global_int32_extended_atomics,+cl_khr_local_int32_base_atomics,+cl_khr_local_int32_extended_atomics,+cl_khr_spir -D__ENDIAN_LITTLE__=1 -DCL_DEVICE_MAX_GLOBAL_VARIABLE_SIZE=0 -emit-llvm -target spir-unknown-unknown -o example2.spir32 -x cl -c example2.cl -include ../../include/_kernel.h -include ../../include/_enable_all_exts.h
clang -D_CL_DISABLE_HALF -Xclang -cl-std=CL1.2 -D__OPENCL_C_VERSION__=120 -D__OPENCL_VERSION__=120 -Dcl_khr_byte_addressable_store -Dcl_khr_global_int32_base_atomics -Dcl_khr_global_int32_extended_atomics -Dcl_khr_local_int32_base_atomics -Dcl_khr_local_int32_extended_atomics -Dcl_khr_int64 -Dcl_khr_spir -Xclang -cl-ext=-all,+cl_khr_byte_addressable_store,+cl_khr_global_int32_base_atomics,+cl_khr_global_int32_extended_atomics,+cl_khr_local_int32_base_atomics,+cl_khr_local_int32_extended_atomics,+cl_khr_spir -D__ENDIAN_LITTLE__=1 -DCL_DEVICE_MAX_GLOBAL_VARIABLE_SIZE=0 -emit-llvm -target spir64-unknown-unknown -o example2.spir64 -x cl -c example2.cl -include ../../include/_kernel.h -include ../../include/_enable_all_exts.h
