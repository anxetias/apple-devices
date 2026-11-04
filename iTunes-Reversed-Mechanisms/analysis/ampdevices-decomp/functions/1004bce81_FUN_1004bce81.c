// name: FUN_1004bce81
// address: 1004bce81

void FUN_1004bce81(undefined1 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  int iVar11;
  undefined8 uVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  size_t sVar16;
  long lVar17;
  ulong local_70;
  ulong local_68;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  pcVar13 = (char *)0x0;
  local_60 = 0;
  local_70 = 0;
  cVar10 = FUN_1001679fe(param_2,&cf_partial_md5_offset);
  lVar17 = 0;
  if (cVar10 == '\0') goto LAB_1004bd31c;
  if (local_60 < 1) {
    uVar12 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar12,0x10);
    if (cVar10 != '\0') {
      local_4a = "partialOffset > 0";
      goto LAB_1004bd2e9;
    }
LAB_1004bd30e:
    FUN_1001782e9(0,0);
  }
  else {
    cVar10 = FUN_1001679fe(param_2,&cf_partial_md5_start_offset,&local_70);
    if (0 < (long)local_70 && cVar10 != '\0') {
      local_68 = 0;
      if (param_3 == 0) {
        uVar12 = FUN_1001cc310();
        cVar10 = _os_log_type_enabled(uVar12,0x10);
        if (cVar10 != '\0') {
          local_4a = "inHashSegments != __null";
LAB_1004bd2e9:
          local_4c = 0x822;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
      }
      else if (local_70 % (ulong)*(uint *)(param_3 + 8) == 0) {
        pcVar13 = (char *)FUN_1004b4e86(param_3,local_70,&local_68);
        if (pcVar13 == (char *)0x0) {
          uVar12 = FUN_1001cc310();
          cVar10 = _os_log_type_enabled(uVar12,0x10);
          if (cVar10 != '\0') {
            local_4a = "segment != __null";
            goto LAB_1004bd2e9;
          }
        }
        else if (local_68 == local_70) {
          *(ulong *)(param_1 + 8) = local_68;
          uVar1 = *(uint *)(param_3 + 8);
          *(ulong *)(param_1 + 0x10) = (ulong)uVar1;
          if (local_60 <= (long)(local_68 + uVar1)) {
            if (*pcVar13 == '\0') {
              FUN_1004afcf8(param_1);
            }
            else {
              param_1[0x60] = pcVar13[0x40];
              uVar2 = *(undefined4 *)pcVar13;
              uVar3 = *(undefined4 *)(pcVar13 + 4);
              uVar4 = *(undefined4 *)(pcVar13 + 8);
              uVar5 = *(undefined4 *)(pcVar13 + 0xc);
              uVar12 = *(undefined8 *)(pcVar13 + 0x10);
              uVar6 = *(undefined8 *)(pcVar13 + 0x18);
              uVar7 = *(undefined8 *)(pcVar13 + 0x20);
              uVar8 = *(undefined8 *)(pcVar13 + 0x28);
              uVar9 = *(undefined8 *)(pcVar13 + 0x38);
              *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(pcVar13 + 0x30);
              *(undefined8 *)(param_1 + 0x58) = uVar9;
              *(undefined8 *)(param_1 + 0x40) = uVar7;
              *(undefined8 *)(param_1 + 0x48) = uVar8;
              *(undefined8 *)(param_1 + 0x30) = uVar12;
              *(undefined8 *)(param_1 + 0x38) = uVar6;
              *(undefined4 *)(param_1 + 0x20) = uVar2;
              *(undefined4 *)(param_1 + 0x24) = uVar3;
              *(undefined4 *)(param_1 + 0x28) = uVar4;
              *(undefined4 *)(param_1 + 0x2c) = uVar5;
              *param_1 = 1;
              param_1[3] = 1;
            }
            goto LAB_1004bd151;
          }
          uVar12 = FUN_1001cc310();
          cVar10 = _os_log_type_enabled(uVar12,0x10);
          if (cVar10 != '\0') {
            local_4a = 
            "partialOffset <= inHashComputation->hashStartOffset + inHashComputation->numBytesToHash"
            ;
            goto LAB_1004bd2e9;
          }
        }
        else {
          uVar12 = FUN_1001cc310();
          cVar10 = _os_log_type_enabled(uVar12,0x10);
          if (cVar10 != '\0') {
            local_4a = "segmentOffset == startOffset";
            goto LAB_1004bd2e9;
          }
        }
      }
      else {
        uVar12 = FUN_1001cc310();
        cVar10 = _os_log_type_enabled(uVar12,0x10);
        if (cVar10 != '\0') {
          local_4a = "(startOffset % inHashSegments->bytesPerSegment) == 0";
          goto LAB_1004bd2e9;
        }
      }
      goto LAB_1004bd30e;
    }
LAB_1004bd151:
    lVar17 = FUN_100171475(param_2,&cf_partial_md5_info);
    if (lVar17 != 0) {
      lVar14 = _CFGetTypeID(lVar17);
      lVar15 = _CFStringGetTypeID();
      if (lVar14 == lVar15) {
        lVar14 = FUN_1001737f8(lVar17);
        pcVar13 = (char *)FUN_1001c63e1(lVar14 * 3 + 1);
        if (pcVar13 != (char *)0x0) {
          FUN_10017393c(lVar17,pcVar13,lVar14 + 1,0x8000100);
          sVar16 = _strlen(pcVar13);
          cVar10 = FUN_1001e0f7d(pcVar13,sVar16);
          if (cVar10 == '\0') {
            uVar12 = FUN_1001cc310();
            cVar10 = _os_log_type_enabled(uVar12,0x10);
            if (cVar10 != '\0') {
              local_4a = "IsHexText((const UInt8*)stringBuffer, stringBufferLength)";
LAB_1004bd443:
              local_4c = 0x822;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
          }
          else {
            lVar14 = (sVar16 >> 1) + 1;
            lVar17 = FUN_1001c63e1(lVar14);
            if (lVar17 != 0) {
              FUN_1001e0e77(pcVar13,sVar16,lVar17,lVar14);
              if (*(long *)(param_1 + 0xa8) != 0) {
                FUN_100179a7b();
                *(undefined8 *)(param_1 + 0xa8) = 0;
              }
              iVar11 = FUN_100179e34(lVar17,lVar14,param_1 + 0xa8);
              if (iVar11 != -0x80) {
                if (iVar11 == 0) {
                  *(long *)(param_1 + 0x18) = local_60 - *(long *)(param_1 + 8);
                  param_1[1] = 1;
                }
                else {
                  uVar12 = FUN_1001cc310();
                  cVar10 = _os_log_type_enabled(uVar12,0x10);
                  if (cVar10 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x400;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar11);
                    __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                }
              }
              goto LAB_1004bd31c;
            }
            uVar12 = FUN_1001cc310();
            cVar10 = _os_log_type_enabled(uVar12,0x10);
            if (cVar10 != '\0') {
              local_4a = "exportData != __null";
              goto LAB_1004bd443;
            }
          }
          lVar17 = 0;
          FUN_1001782e9(0,0);
          goto LAB_1004bd31c;
        }
        uVar12 = FUN_1001cc310();
        cVar10 = _os_log_type_enabled(uVar12,0x10);
        if (cVar10 != '\0') {
          local_4a = "stringBuffer != __null";
          goto LAB_1004bd2e9;
        }
      }
      else {
        uVar12 = FUN_1001cc310();
        cVar10 = _os_log_type_enabled(uVar12,0x10);
        if (cVar10 != '\0') {
          local_4a = "CFGetTypeID(dictionaryString) == CFStringGetTypeID()";
          goto LAB_1004bd2e9;
        }
      }
      goto LAB_1004bd30e;
    }
  }
  pcVar13 = (char *)0x0;
  lVar17 = 0;
LAB_1004bd31c:
  FUN_1001c64c1(lVar17);
  FUN_1001c64c1(pcVar13);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

