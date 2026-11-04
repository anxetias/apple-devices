// name: FUN_1001776af
// address: 1001776af

int FUN_1001776af(int *param_1,int param_2,undefined4 param_3,ulong *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 in_RAX;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int local_34;
  
  local_34 = (int)((ulong)in_RAX >> 0x20);
  if ((param_1 == (int *)0x0) || (*param_1 != 0x63687064)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100683596(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
  }
  else {
    iVar5 = -0x32;
    if ((*(byte *)(param_1 + 3) & 2) != 0) {
      lVar3 = *(long *)(param_1 + 0xc);
      if (lVar3 == 0) {
        iVar2 = FUN_100177051(*(undefined8 *)(param_1 + 6),0x706c6f63,param_1 + 0xc);
        if (iVar2 != 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 == '\0') {
            return iVar2;
          }
          FUN_10068352a(iVar2,uVar4);
          return iVar2;
        }
        lVar3 = *(long *)(param_1 + 0xc);
      }
      lVar3 = FUN_1001773b9(lVar3,param_2 + (uint)(param_2 == 0),param_3,&local_34);
      if (lVar3 != 0) {
        *param_4 = (ulong)(local_34 + 1);
        iVar5 = 0;
      }
    }
  }
  return iVar5;
}

