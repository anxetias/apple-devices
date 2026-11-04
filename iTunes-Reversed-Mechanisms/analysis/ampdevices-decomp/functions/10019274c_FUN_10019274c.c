// name: FUN_10019274c
// address: 10019274c

void FUN_10019274c(long param_1,long param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ushort uVar10;
  undefined2 uVar11;
  char *pcVar12;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined1 local_468 [16];
  long local_458;
  long local_450;
  char local_448 [8];
  uint local_440;
  uint local_43c;
  byte local_436;
  uint local_42c;
  byte local_426;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_488 = 0;
  uStack_480 = 0;
  local_478 = 0;
  ___bzero(param_2,0x468);
  local_450 = param_1 + 0x58;
  FUN_10018dce1(local_450,param_2);
  *(undefined4 *)(param_2 + 0x41c) = *(undefined4 *)(param_1 + 0x30);
  *(undefined1 *)(param_2 + 0x18) = 1;
  *(undefined2 *)(param_2 + 4) = 6;
  uVar10 = *(ushort *)(param_1 + 0x40) & 1;
  uVar4 = *(ushort *)(param_2 + 0x426);
  *(ushort *)(param_2 + 0x426) = uVar4 & 0xfffe | uVar10;
  uVar4 = (uVar4 & 0xfffa | uVar10 | *(ushort *)(param_1 + 0x40) >> 10 & 4) ^ 4;
  *(ushort *)(param_2 + 0x426) = uVar4;
  *(ushort *)(param_2 + 0x426) =
       (uVar4 & 0xff37) + ((ushort)((uint)*(undefined4 *)(param_1 + 0x40) >> 0x13) & 8) + 0x40;
  pcVar1 = (char *)(param_1 + 0x48);
  iVar5 = _strcmp(pcVar1,"lifs");
  pcVar12 = pcVar1;
  if (iVar5 == 0) {
    FUN_1001aaf3c(local_468,param_1 + 0x458);
    FUN_1001ab378(&local_458,local_468);
    FUN_1001ab006(local_468);
    if (local_458 != 0) {
      FUN_1001ab45a(local_468,&local_458);
      cVar3 = FUN_1001b8428(local_468);
      if (cVar3 == '\0') {
        uVar7 = FUN_1001b83ae(local_468);
        pcVar12 = local_448;
        FUN_1001dfbb3(uVar7,pcVar12,0x100);
      }
      FUN_1001b7a50(local_468);
    }
    FUN_1001ab3c4(&local_458);
  }
  iVar5 = _strcmp(pcVar12,"apfs");
  uVar11 = 0x6375;
  if (iVar5 != 0) {
    iVar5 = _strcmp(pcVar12,"exfat");
    if (iVar5 == 0) {
      uVar11 = 0x7846;
    }
    else {
      iVar5 = _strcmp(pcVar12,"msdos");
      if (iVar5 == 0) {
        uVar11 = 0x4953;
      }
      else {
        iVar5 = _strcmp(pcVar12,"afpfs");
        if (iVar5 == 0) {
          uVar11 = 0x6173;
        }
        else {
          iVar5 = _strcmp(pcVar12,"smbfs");
          if ((iVar5 != 0) && (iVar5 = _strcmp(pcVar12,"nfs"), iVar5 != 0)) {
            iVar5 = _strcmp(pcVar12,"hfs");
            if (iVar5 == 0) {
              uVar11 = 0;
            }
            else {
              iVar5 = _strcmp(pcVar12,"cddafs");
              uVar11 = 0x6375;
              if (iVar5 == 0) {
                uVar11 = 0x4a48;
              }
            }
          }
        }
      }
    }
  }
  *(undefined2 *)(param_2 + 0x420) = uVar11;
  iVar5 = _strcmp(pcVar1,"smbfs");
  uVar4 = *(ushort *)(param_2 + 0x426);
  if (iVar5 == 0) {
    uVar4 = uVar4 | 0x10;
    *(ushort *)(param_2 + 0x426) = uVar4;
  }
  if ((uVar4 & 4) == 0) {
    if ((DAT_1008c4dc8 != 0) &&
       (lVar8 = _DADiskCreateFromBSDName(0,DAT_1008c4dc8,param_1 + 0x458), lVar8 != 0)) {
      lVar9 = _DADiskGetBSDName(lVar8);
      if (lVar9 != 0) {
        FUN_1001dfbb3(lVar9,param_2 + 0x428,0x40);
        _CFRelease(lVar8);
        goto LAB_100192a64;
      }
      _CFRelease(lVar8);
    }
    _basename_r(param_1 + 0x458,local_448);
    FUN_1001dfbb3(local_448,param_2 + 0x428,0x40);
  }
  else {
    FUN_1001dfbb3(local_450,param_2 + 0x428,0x40);
  }
LAB_100192a64:
  if ((*(byte *)(param_2 + 0x426) & 4) == 0) {
    if (*(char *)(param_2 + 0x428) == '\0') {
LAB_100192b2c:
      uVar4 = 0;
    }
    else {
      uVar2 = *(undefined4 *)PTR__kIOMasterPortDefault_10082e788;
      lVar8 = _IOBSDNameMatching(uVar2,0,param_2 + 0x428);
      if (lVar8 == 0) goto LAB_100192b2c;
      _CFDictionarySetValue(lVar8,&cf_IOProviderClass,&cf_IOMedia);
      iVar5 = _IOServiceGetMatchingService(uVar2,lVar8);
      if (iVar5 == 0) goto LAB_100192b2c;
      lVar8 = _IORegistryEntryCreateCFProperty(iVar5,&cf_Ejectable,0,0);
      if (lVar8 == 0) {
        uVar4 = 0;
      }
      else {
        local_450 = _CFGetTypeID(lVar8);
        lVar9 = _CFBooleanGetTypeID();
        if ((local_450 == lVar9) || (lVar9 = _CFNumberGetTypeID(), local_450 == lVar9)) {
          cVar3 = _CFBooleanGetValue(lVar8);
          uVar4 = (ushort)(cVar3 != '\0') * 2;
        }
        else {
          uVar4 = 0;
        }
        _CFRelease(lVar8);
      }
      _IOObjectRelease(iVar5);
    }
    *(ushort *)(param_2 + 0x426) = uVar4 | *(ushort *)(param_2 + 0x426) & 0xfffd;
  }
  local_488 = CONCAT62(local_488._2_6_,5);
  uStack_480 = CONCAT44(uStack_480._4_4_,0xc0020003);
  iVar5 = _getattrlist((char *)(param_2 + 0x19),&local_488,local_448,0x54,0);
  if (iVar5 != 0) goto LAB_100192c66;
  *(short *)(param_2 + 0x422) = (short)local_440;
  if (((local_440 & 0xffff) == 0x4244) && (iVar6 = _strcmp(pcVar1,"nfs"), iVar6 == 0)) {
    *(undefined2 *)(param_2 + 0x422) = 0x4e4a;
    local_440 = 0x4e4a;
  }
  if ((local_42c >> 0x11 & 1) == 0) {
    if ((local_42c & 1) != 0) {
LAB_100192c09:
      if ((((local_42c >> 0xe & 1) != 0) && ((local_43c & 0x4001) == 0x4001)) &&
         ((*(byte *)(param_1 + 0x41) & 0x80) != 0)) {
        *(byte *)(param_2 + 0x426) = *(byte *)(param_2 + 0x426) | 0x20;
      }
    }
  }
  else if ((local_42c & 1) != 0 && (local_43c >> 0x11 & 1) == 0) goto LAB_100192c09;
  if (((local_426 & 1) != 0) && ((local_436 & 1) != 0)) {
    *(byte *)(param_2 + 0x427) = *(byte *)(param_2 + 0x427) | 1;
  }
  if ((*(short *)(param_2 + 0x420) == 0x4953) && ((local_440 & 0xffff) == 0x4244)) {
    *(undefined2 *)(param_2 + 0x424) = *(undefined2 *)(param_1 + 0x44);
  }
LAB_100192c66:
  FUN_1001eb020(iVar5);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

