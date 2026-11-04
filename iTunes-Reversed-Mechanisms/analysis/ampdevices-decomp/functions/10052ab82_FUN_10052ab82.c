// name: FUN_10052ab82
// address: 10052ab82

void FUN_10052ab82(void)

{
  char cVar1;
  undefined2 local_18 [8];
  
  cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
  if (cVar1 != '\0') {
    local_18[0] = 0;
    __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                  "devicesframework xpc connection interrupted",local_18,2);
  }
  return;
}

