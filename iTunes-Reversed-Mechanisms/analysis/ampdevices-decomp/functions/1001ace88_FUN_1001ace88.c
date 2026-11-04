// name: FUN_1001ace88
// address: 1001ace88

undefined8 FUN_1001ace88(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (DAT_10089cbf0 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_10089cbf0);
    if (iVar1 != 0) {
      uVar2 = _CFCharacterSetGetPredefined(4);
      FUN_1001acf1c(&DAT_10089cbe0,uVar2);
      ___cxa_atexit(FUN_1001ace7e,&DAT_10089cbe0,0x100000000);
      ___cxa_guard_release(&DAT_10089cbf0);
    }
  }
  FUN_1001acf54(param_1,&DAT_10089cbe0);
  return param_1;
}

