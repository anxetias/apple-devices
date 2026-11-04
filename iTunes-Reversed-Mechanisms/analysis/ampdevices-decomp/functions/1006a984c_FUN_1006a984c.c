// name: FUN_1006a984c
// address: 1006a984c

void FUN_1006a984c(undefined8 *param_1)

{
  ulong in_RAX;
  ulong local_18;
  
  local_18 = in_RAX & 0xffffffffffff0000;
  __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                      "GetReadOnlyPagePtr(): Failed to allocate memory",&local_18,2);
  *param_1 = DAT_1008a2260;
  return;
}

