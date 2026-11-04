// name: FUN_10025bee9
// address: 10025bee9

void FUN_10025bee9(void)

{
  char cVar1;
  undefined2 local_18 [8];
  
  cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
  if (cVar1 != '\0') {
    local_18[0] = 0;
    __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,"AMPDevicesAgent handling SIGUSR1",
                  local_18,2);
  }
  if (DAT_1008a2e70 != 0) {
    FUN_10046c38a();
  }
                    /* WARNING: Subroutine does not return */
  __exit(0);
}

