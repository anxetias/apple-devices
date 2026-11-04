// name: FUN_1001a57c2
// address: 1001a57c2

void FUN_1001a57c2(long *param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined2 local_38 [8];
  undefined2 local_28 [4];
  
  lVar1 = param_1[7];
  uVar3 = FUN_1001a25a0();
  cVar2 = _os_log_type_enabled(uVar3,1);
  if ((char)lVar1 == '\x01') {
    if (cVar2 != '\0') {
      local_38[0] = 0;
      __os_log_impl(0x100000000,uVar3,1,"network is UP [delayed]",local_38,2);
    }
    (**(code **)(*param_1 + 0x10))(param_1,0x6e747564,0,0,0);
  }
  else if (cVar2 != '\0') {
    local_28[0] = 0;
    __os_log_impl(0x100000000,uVar3,1,"skipping delayed UP notification because network is now DOWN"
                  ,local_28,2);
  }
  FUN_1001a565e(param_1);
  return;
}

