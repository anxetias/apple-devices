// name: FUN_10017574a
// address: 10017574a

undefined8 FUN_10017574a(int *param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x63687064)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100681c22(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    if ((char)param_1[4] != '\0') {
      FUN_10015c0de(*(undefined8 *)(param_1 + 6),0,0x68656472,8);
      *(undefined1 *)(param_1 + 4) = 0;
    }
    lVar2 = FUN_10015b5d1(*(undefined8 *)(param_1 + 6));
    *param_2 = lVar2;
    uVar3 = 0xffffffce;
    if (lVar2 != 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}

