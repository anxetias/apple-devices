// name: FUN_1003bde70
// address: 1003bde70

void FUN_1003bde70(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined1 local_38 [12];
  undefined4 local_2c;
  
  LOCK();
  if (*(int *)(param_2 + 0x1ea8) == 1) {
    *(int *)(param_2 + 0x1ea8) = 0;
  }
  UNLOCK();
  lVar1 = param_2 + 0x1f18;
  FUN_1001ea458(lVar1);
  if ((*(char *)(param_2 + 0x1eb5) == '\0') && (*(int *)(param_2 + 0x1eac) == 0)) {
    lVar4 = FUN_1001eaad3(param_2 + 0x1eb8);
    if (lVar4 != 0) {
      *(undefined1 *)(param_2 + 0x1eb5) = 1;
      FUN_1001ea9a5(lVar4,param_2 + 0x1eb8);
      FUN_1001ea4ac(lVar1);
      *(undefined4 *)(lVar4 + 0x20) = 0;
      uVar3 = FUN_10046d7bc(param_2 + 0x490,*(undefined8 *)(lVar4 + 0x10),
                            *(undefined4 *)(param_2 + 0x1d68),&local_2c,local_38);
      lVar2 = *(long *)(lVar4 + 0x28);
      *(undefined4 *)(lVar4 + 8) = uVar3;
      *(undefined4 *)(lVar4 + 0x20) = local_2c;
      lVar1 = lVar2 + 0x1f18;
      FUN_1001ea458(lVar1);
      lVar5 = lVar2 + 0x1eb8;
      if (*(int *)(lVar4 + 0x20) != 0) {
        lVar5 = lVar2 + 0x1ed0;
      }
      FUN_1001ea897(lVar4,lVar5);
      *(undefined4 *)(lVar2 + 0x1eac) = *(undefined4 *)(lVar4 + 8);
      *(undefined1 *)(lVar2 + 0x1eb5) = 0;
      FUN_1001ea29d(lVar1);
      FUN_1001ea4ac(lVar1);
      FUN_1003be09a(lVar2);
      return;
    }
    *(undefined1 *)(param_2 + 0x1eb5) = 0;
  }
  FUN_1001ea4ac(lVar1);
  return;
}

