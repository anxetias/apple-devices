// name: FUN_1001c4c19
// address: 1001c4c19

undefined8 FUN_1001c4c19(int *param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x6d656d62)) {
    lVar1 = *(long *)(param_1 + 10);
    if (lVar1 != 0) {
      param_1[10] = 0;
      param_1[0xb] = 0;
      uVar3 = FUN_1001c509c(param_1,*(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 8),lVar1,
                            0,0);
      return uVar3;
    }
    return 0;
  }
  uVar3 = FUN_1001cc310();
  cVar2 = _os_log_type_enabled(uVar3,0x10);
  if (cVar2 != '\0') {
    FUN_1006a7bc6(uVar3);
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

