// name: FUN_1001e9f96
// address: 1001e9f96

undefined8 FUN_1001e9f96(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x756c636b)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c25c3(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffe4;
  }
  else {
    _os_unfair_lock_unlock(param_1 + 1);
    uVar2 = 0;
  }
  return uVar2;
}

