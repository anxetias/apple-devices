// name: FUN_1001c861c
// address: 1001c861c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1001c861c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_34;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006aa97e(uVar5);
    }
    FUN_1001782e9(0,0);
    return -0x32;
  }
  *param_1 = 0;
  puVar4 = (undefined4 *)FUN_1001c6429(0x48);
  if (puVar4 == (undefined4 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006aa908(uVar5);
    }
    FUN_1001782e9(0,0);
    return -0x6c;
  }
  *puVar4 = 0x6d657461;
  local_34 = 0;
  plVar1 = (long *)(puVar4 + 2);
  iVar3 = FUN_10015d60b(0x6d657461,&local_34,4,plVar1,2);
  if (iVar3 == -0x80) goto LAB_1001c8809;
  if (iVar3 != 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006aa89c(iVar3,uVar5);
    }
    goto LAB_1001c8809;
  }
  local_58 = _DAT_100711ed0;
  uStack_54 = _UNK_100711ed4;
  uStack_50 = _UNK_100711ed8;
  uStack_4c = _UNK_100711edc;
  plVar6 = (long *)(puVar4 + 4);
  local_48 = 0;
  local_40 = 0;
  iVar3 = FUN_10015d60b(0x68646c72,&local_58,0x1a,plVar6,2);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      iVar3 = FUN_10015d357(*plVar1,*plVar6,0);
      if (iVar3 == -0x80) goto LAB_1001c87ea;
      if (iVar3 == 0) {
        *param_1 = puVar4;
        return 0;
      }
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        FUN_1006aa7c4(iVar3,uVar5);
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        FUN_1006aa830(iVar3,uVar5);
      }
    }
    if (iVar3 == 0) {
      return 0;
    }
  }
LAB_1001c87ea:
  if (*plVar1 != 0) {
    FUN_10015ccc4(*plVar1,0);
  }
  if (*plVar6 != 0) {
    FUN_10015ccc4(*plVar6,0);
  }
LAB_1001c8809:
  FUN_1001c64c1(puVar4);
  return iVar3;
}

