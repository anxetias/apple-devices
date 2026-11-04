// name: FUN_1001842e8
// address: 1001842e8

int FUN_1001842e8(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_68 [8];
  
  if ((*(char *)(param_3 + 3) != '\0') &&
     (*(int *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + 1, *(char *)(param_1 + 1) == '\0')) {
    FUN_1001c62d9(local_68,0x40);
    local_68[0] = param_2;
    iVar2 = (**(code **)(param_1 + 0x30))(0x6c6f636b,local_68,*(undefined8 *)(param_1 + 0x38));
    if (iVar2 == -0x80) {
      return -0x80;
    }
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') {
        return iVar2;
      }
      FUN_10068ae35(iVar2,uVar3);
      return iVar2;
    }
  }
  uVar5 = (ulong)*(uint *)(*(long *)(param_1 + 0x2b8) + 0x478);
  lVar4 = (*(long *)(param_3 + 0x20) + (uVar5 - 1)) / uVar5 + *(long *)(param_1 + 0x2c0);
  *(long *)(param_1 + 0x2c0) = lVar4;
  *(ulong *)(param_1 + 0x2c0) = ((uVar5 - 1) + *(long *)(param_3 + 0x28)) / uVar5 + lVar4;
  return 0;
}

