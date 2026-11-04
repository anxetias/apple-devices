// name: FUN_1001ca240
// address: 1001ca240

int FUN_1001ca240(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint uVar6;
  long local_38;
  
  local_38 = 0;
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006acbd0(uVar5);
    }
    FUN_1001782e9(0,0);
    return -0x32;
  }
  iVar3 = FUN_1001ca162(param_1,0x6e616d65);
  if (iVar3 == -0x80) {
    return -0x80;
  }
  if (iVar3 == 0) {
    lVar1 = (long)param_3 + 0xc;
    puVar4 = (uint *)FUN_1001c63e1(lVar1);
    if (puVar4 == (uint *)0x0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        FUN_1006acaee(uVar5);
      }
      FUN_1001782e9(0,0);
      return -0x6c;
    }
    uVar6 = (uint)lVar1;
    *puVar4 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    puVar4[1] = 0x656d616e;
    puVar4[2] = 0;
    FUN_1001c631b(param_2,puVar4 + 3,(long)param_3);
    iVar3 = FUN_10015cb08(puVar4,&local_38,2);
    if (iVar3 == -0x80) goto LAB_1001ca373;
    if (iVar3 == 0) {
      iVar3 = FUN_10015d357(param_1,local_38,0);
      if ((iVar3 != -0x80) && (iVar3 != 0)) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          FUN_1006aca16(iVar3,uVar5);
        }
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        FUN_1006aca82(iVar3,uVar5);
      }
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006acb64(iVar3,uVar5);
    }
    puVar4 = (uint *)0x0;
  }
  if (iVar3 == 0) {
    return 0;
  }
LAB_1001ca373:
  if (local_38 == 0) {
    if (puVar4 != (uint *)0x0) {
      FUN_1001c64c1(puVar4);
    }
  }
  else {
    FUN_10015ccc4(local_38,1);
  }
  return iVar3;
}

