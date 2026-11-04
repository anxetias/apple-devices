// name: FUN_10012dd06
// address: 10012dd06

undefined1 FUN_10012dd06(long param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined2 local_28 [8];
  
  uVar3 = FUN_10012d63e();
  cVar2 = _os_log_type_enabled(uVar3,1);
  if (cVar2 != '\0') {
    local_28[0] = 0;
    __os_log_impl(0x100000000,uVar3,1,"Stopping accepting requests.",local_28,2);
  }
  LOCK();
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x18) = 0;
  UNLOCK();
  return uVar1;
}

