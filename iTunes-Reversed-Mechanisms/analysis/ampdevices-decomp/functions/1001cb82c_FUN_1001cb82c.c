// name: FUN_1001cb82c
// address: 1001cb82c

int FUN_1001cb82c(int *param_1,undefined8 param_2,long *param_3,undefined4 param_4,
                 undefined1 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  long local_50;
  int local_44;
  ulong local_40;
  undefined1 local_31;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6d657461)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ae3e2(uVar3);
    }
LAB_1001cb937:
    FUN_1001782e9(0,0);
    return -0x32;
  }
  if (param_3 == (long *)0x0 || param_5 == (undefined1 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ae294(uVar3);
    }
    goto LAB_1001cb937;
  }
  *param_5 = 0;
  iVar2 = FUN_1001c955b(param_1,param_2,0,0,&local_50);
  if (iVar2 == -0x80) {
    return -0x80;
  }
  if (iVar2 != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') {
      return iVar2;
    }
    FUN_1006ae376(iVar2,uVar3);
    return iVar2;
  }
  if (local_50 == 0) {
    return 0;
  }
  local_40 = 0;
  iVar2 = FUN_1001cad10(local_50,1,&local_31,&local_40,8,&local_44);
  if (iVar2 == -0x80) {
    return -0x80;
  }
  if (iVar2 != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ae30a(iVar2,uVar3);
    }
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  iVar2 = -0xce;
  switch(local_44) {
  case 1:
    break;
  case 2:
    local_40 = CONCAT62(local_40._2_6_,(ushort)local_40 << 8 | (ushort)local_40 >> 8);
    break;
  default:
    goto switchD_1001cb912_caseD_3;
  case 4:
    local_40 = CONCAT44(local_40._4_4_,
                        (uint)local_40 >> 0x18 | ((uint)local_40 & 0xff0000) >> 8 |
                        ((uint)local_40 & 0xff00) << 8 | (uint)local_40 << 0x18);
    break;
  case 8:
    local_40 = local_40 >> 0x38 | (local_40 & 0xff000000000000) >> 0x28 |
               (local_40 & 0xff0000000000) >> 0x18 | (local_40 & 0xff00000000) >> 8 |
               (local_40 & 0xff000000) << 8 | (local_40 & 0xff0000) << 0x18 |
               (local_40 & 0xff00) << 0x28 | local_40 << 0x38;
  }
  bVar5 = -(char)(local_44 << 3);
  lVar4 = (long)(local_40 << (bVar5 & 0x3f)) >> (bVar5 & 0x3f);
  iVar2 = -0x32;
  switch(param_4) {
  case 1:
    *(char *)param_3 = (char)lVar4;
    break;
  case 2:
    *(short *)param_3 = (short)lVar4;
    break;
  default:
    goto switchD_1001cb9f1_caseD_3;
  case 4:
    *(int *)param_3 = (int)lVar4;
    break;
  case 8:
    *param_3 = lVar4;
  }
  iVar2 = 0;
switchD_1001cb9f1_caseD_3:
  *param_5 = 1;
switchD_1001cb912_caseD_3:
  return iVar2;
}

