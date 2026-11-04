// name: FUN_1006840b4
// address: 1006840b4

void FUN_1006840b4(undefined8 param_1)

{
  undefined4 local_28;
  char *local_24;
  undefined2 local_1c;
  char *local_1a;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_28 = 0x8220202;
  local_24 = "Assertion failure";
  local_1c = 0x822;
  local_1a = 
  "((UInt32)(UInt32) (__builtin_constant_p(exportData->magic) ? ((__uint32_t)((((__uint32_t)(exportData->magic) & 0xff000000U) >> 24) | (((__uint32_t)(exportData->magic) & 0x00ff0000U) >> 8) | (((__uint32_t)(exportData->magic) & 0x0000ff00U) << 8) | (((__uint32_t)(exportData->magic) & 0x000000ffU) << 24))) : (__builtin_constant_p(exportData->magic) ? ((__uint32_t)((((__uint32_t)(exportData->magic) & 0xff000000U) >> 24) | (((__uint32_t)(exportData->magic) & 0x00ff0000U) >> 8) | (((__uint32_t)(exportData->magic) & 0x0000ff00U) << 8) | (((__uint32_t)(exportData->magic) & 0x000000ffU) << 24))) : _OSSwapInt32(exportData->magic)))) == ((UInt32) \'Hash\')"
  ;
  __os_log_error_impl(0x100000000,param_1,0x10,"%{public}s: err == (%d)",&local_28,0x16);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

