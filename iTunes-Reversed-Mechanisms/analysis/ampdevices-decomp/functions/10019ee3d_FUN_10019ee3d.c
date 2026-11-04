// name: FUN_10019ee3d
// address: 10019ee3d

void FUN_10019ee3d(long param_1)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  if ((*(uint *)(param_1 + 0x70) < *(uint *)(param_1 + 0x74)) &&
     (lVar2 = *(long *)(param_1 + 0x50), lVar2 != 0)) {
    FUN_10019f28b(param_1 + 0x50,param_1 + 0x58,lVar2);
    FUN_10019f3d1(param_1 + 0x60,param_1 + 0x68,lVar2);
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    iVar4 = FUN_1001e9eb9(param_1 + 8);
    if ((iVar4 != -0x80) && (iVar4 != 0)) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        FUN_10069b82e(iVar4,uVar5);
      }
    }
    uVar1 = *(uint *)(lVar2 + 0x20);
    pcVar6 = FUN_10019f0bc;
    if (*(long *)(lVar2 + 0x80) == 0) {
      pcVar6 = (code *)0x0;
    }
    iVar4 = FUN_10019cbf5(*(undefined8 *)(lVar2 + 0x30),*(undefined8 *)(lVar2 + 0x38),
                          *(undefined8 *)(param_1 + 0x98),lVar2 + 0x90,*(undefined8 *)(lVar2 + 0x18)
                          ,*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x50),
                          *(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x60),
                          *(undefined4 *)(lVar2 + 0x68),
                          (uVar1 << 5 & 0xfc000 |
                           (uVar1 & 0x180) << 4 |
                           uVar1 >> 1 & 0xc | uVar1 << 5 & 0x40 | uVar1 >> 4 & 2 | uVar1 >> 2 & 0x10
                           | (uVar1 & 1) << 5 | 1) ^ 2,0,0,FUN_10019efe7,pcVar6,lVar2);
    if (iVar4 != 0) {
      FUN_10019efe7(lVar2,iVar4);
    }
  }
  else {
    iVar4 = FUN_1001e9eb9(param_1 + 8);
    if ((iVar4 != -0x80) && (iVar4 != 0)) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        FUN_10069b89a(iVar4,uVar5);
      }
    }
  }
  return;
}

