// name: FUN_10019efe7
// address: 10019efe7

void FUN_10019efe7(long param_1,undefined4 param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_10069b972(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x10);
    FUN_1001ed4fd(*(undefined8 *)(param_1 + 0x98),FUN_10019bdcb,param_1 + 0x90,1);
    iVar3 = FUN_1001e9de0(lVar1 + 8);
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_10069b906(iVar3,uVar4);
      }
    }
    uVar5 = 0x2cb4;
    if (*(char *)(param_1 + 0xd1) == '\0') {
      uVar5 = param_2;
    }
    FUN_10019c3d3(param_1,uVar5);
    FUN_10019ee3d(lVar1);
  }
  return;
}

