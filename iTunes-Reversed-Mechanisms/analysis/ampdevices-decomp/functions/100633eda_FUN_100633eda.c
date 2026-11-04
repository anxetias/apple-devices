// name: FUN_100633eda
// address: 100633eda

undefined1 FUN_100633eda(undefined8 param_1,long param_2,long param_3,ushort *param_4)

{
  ulong uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ushort uVar10;
  int iVar11;
  undefined1 uVar12;
  long local_98;
  undefined8 local_90;
  ulong local_88;
  int local_80;
  int local_7c;
  char local_78 [4];
  char *local_74;
  undefined2 local_6c;
  char *local_6a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar11 = (int)param_1;
  if (iVar11 == 0) {
    uVar12 = 0;
    goto LAB_100634257;
  }
  uVar9 = *(undefined8 *)PTR__kCFAllocatorDefault_10082e018;
  uVar12 = 0;
  iVar4 = _IORegistryEntryCreateCFProperties(param_1,&local_98,uVar9,0);
  if (local_98 == 0 || iVar4 != 0) goto LAB_100634257;
  uVar6 = FUN_100166c1b(local_98,&cf_VendorIdentification);
  uVar7 = FUN_100166c1b(local_98,&cf_ProductIdentification);
  local_90 = FUN_100166c1b(local_98,&cf_ProductRevisionLevel);
  local_88 = 0;
  local_80 = iVar11;
  local_7c = iVar11;
  do {
    iVar4 = _IOObjectConformsTo(local_7c,"IOUSBDevice");
    iVar11 = local_7c;
    if (iVar4 != 0) {
      iVar4 = _IORegistryEntryCreateCFProperties(local_7c,&local_88,uVar9,0);
      iVar11 = local_80;
      if (iVar4 != 0) {
        uVar9 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar9,0x10);
        if (cVar2 != '\0') {
          builtin_strncpy(local_78,"\x02\x02\"\b",4);
          local_74 = "Assertion failure";
          local_6c = 0x822;
          local_6a = "err == 0";
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",local_78,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (local_7c != iVar11) {
        _IOObjectRelease();
      }
      break;
    }
    iVar4 = _IORegistryEntryGetParentEntry(local_7c,"IOService",&local_7c);
    if (iVar11 != local_80) {
      _IOObjectRelease(iVar11);
    }
  } while (iVar4 == 0);
  uVar1 = local_88;
  if (local_88 == 0) {
LAB_100634112:
    cVar2 = FUN_100173f7c(uVar6,&cf_Apple);
    if (((cVar2 == '\0') ||
        ((cVar2 = FUN_100173f7c(uVar7,&cf_iPod), cVar2 == '\0' ||
         (cVar2 = FUN_100173f7c(local_90,&cf_1_), cVar2 == '\0')))) &&
       ((cVar2 = FUN_100173f7c(uVar6,&cf_Apple), cVar2 == '\0' ||
        ((cVar2 = FUN_100173f7c(uVar7,&cf_iPod), cVar2 == '\0' ||
         (cVar2 = FUN_100173f7c(local_90,&cf_2_), cVar2 == '\0')))))) {
LAB_100634248:
      uVar12 = 0;
    }
    else {
      if (param_4 != (ushort *)0x0) {
        uVar10 = 0;
        local_88 = local_88 & 0xffffffff00000000;
        local_7c = 0;
        cVar2 = FUN_10017393c(local_90,local_78,0x40,0x600);
        if (cVar2 != '\0') {
          _sscanf(local_78,"%u.%u",&local_88,&local_7c);
          uVar10 = (ushort)((int)local_88 << 8) | (ushort)local_7c & 0xff;
        }
        *param_4 = uVar10;
      }
      if (param_2 != 0) {
        FUN_100633c37(local_80,param_2);
      }
      uVar12 = 1;
      if (param_3 != 0) {
        FUN_100633947(local_80,param_3,0);
      }
    }
  }
  else {
    sVar3 = FUN_100167cc9(local_88,&cf_idVendor);
    uVar5 = FUN_100167cc9(uVar1,&cf_idProduct);
    lVar8 = FUN_100166c1b(uVar1,&cf_kUSBVendorString);
    uVar9 = FUN_100166c1b(uVar1,&cf_kUSBProductString);
    if ((sVar3 != 0x5ac) ||
       ((lVar8 != 0 && (cVar2 = FUN_100173f7c(lVar8,&cf_Apple), cVar2 == '\0')))) {
      FUN_10017060f(uVar1);
      goto LAB_100634248;
    }
    cVar2 = FUN_100173f7c(uVar9,&cf_iPod);
    FUN_10017060f(uVar1);
    uVar12 = 0;
    if ((cVar2 != '\0') && (uVar12 = 0, (uVar5 & 0xfe00) == 0x1200)) goto LAB_100634112;
  }
  FUN_10017060f(local_98);
LAB_100634257:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar12;
}

