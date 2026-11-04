// name: FUN_1001ddf7c
// address: 1001ddf7c

ulong FUN_1001ddf7c(undefined8 param_1,long param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulong in_RAX;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong local_38;
  
  if (param_2 == 0) {
    lVar4 = 0;
    iVar2 = 0;
LAB_1001de001:
    uVar5 = FUN_1001ddddc(param_1,lVar4,iVar2,param_4);
    return uVar5;
  }
  local_38 = in_RAX;
  if (param_3 == 0x100) {
    lVar4 = FUN_1001739af(param_2);
    if (lVar4 != 0) {
      iVar2 = FUN_1001737f8(param_2);
      iVar2 = iVar2 * 2;
      goto LAB_1001de001;
    }
  }
  lVar4 = FUN_1001de059(param_2,param_3,&local_38);
  if (lVar4 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      FUN_1006b91dd(uVar6);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffff94;
  }
  else {
    uVar3 = FUN_1001ddddc(param_1,lVar4,local_38 & 0xffffffff,param_4);
    uVar5 = (ulong)uVar3;
    FUN_1001c64c1(lVar4);
  }
  return uVar5;
}

