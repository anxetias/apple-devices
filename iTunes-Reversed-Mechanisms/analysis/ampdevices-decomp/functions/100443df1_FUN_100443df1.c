// name: FUN_100443df1
// address: 100443df1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_100443df1(undefined8 param_1,undefined4 *param_2)

{
  double dVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double *pdVar11;
  undefined8 uVar12;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar6 = _AVCFAssetTrackCopyFormatDescriptions();
  uVar3 = 2;
  if ((lVar6 == 0) || (lVar7 = FUN_10017076e(lVar6), lVar7 < 1)) goto LAB_1004441ac;
  lVar7 = FUN_100170853(lVar6,0);
  lVar8 = _CMFormatDescriptionGetExtension
                    (lVar7,*(undefined8 *)
                            PTR__kCMFormatDescriptionExtension_VerbatimSampleDescription_10082bc10);
  if ((lVar8 == 0) &&
     (lVar8 = _CMFormatDescriptionGetExtension
                        (lVar7,*(undefined8 *)
                                PTR__kCMFormatDescriptionExtension_VerbatimISOSampleEntry_10082bc08)
     , lVar8 == 0)) {
    uVar12 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar12,0x10);
    if (cVar2 != '\0') {
      local_4a = "propList != __null";
LAB_100443f9f:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_100443fc4:
    FUN_1001782e9(0,0);
LAB_100443fcd:
    uVar3 = 1;
  }
  else {
    lVar9 = FUN_1001705e9(lVar8);
    lVar10 = FUN_100170dbb();
    if (lVar9 != lVar10) {
      uVar12 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar12,0x10);
      if (cVar2 != '\0') {
        local_4a = "JRCFGetTypeID(propList) == JRCFDataGetTypeID()";
        goto LAB_100443f9f;
      }
      goto LAB_100443fc4;
    }
    lVar8 = FUN_100170f3b(lVar8);
    uVar4 = *(uint *)(lVar8 + 4);
    uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    uVar3 = 0x12d;
    if (0x6670636c < (int)uVar4) {
      if (0x6d730054 < (int)uVar4) {
        if ((int)uVar4 < 0x736f7774) {
          if (uVar4 != 0x6d730055) {
            if (uVar4 == 0x72617720) goto LAB_100444188;
            if (uVar4 != 0x73616d72) goto LAB_100443fcd;
            uVar3 = 0x321;
          }
        }
        else {
          if ((int)uVar4 < 0x756c6177) {
            if ((uVar4 == 0x736f7774) || (uVar4 == 0x74776f73)) goto LAB_100444188;
            goto LAB_100443fcd;
          }
          if (uVar4 == 0x756c6177) {
            uVar3 = 0x323;
          }
          else {
            if (uVar4 != 0x75736163) goto LAB_100443fcd;
            uVar3 = 0x3e9;
          }
        }
        goto LAB_10044418d;
      }
      if ((int)uVar4 < 0x696e3332) {
        if (uVar4 != 0x6670636d) {
          if (uVar4 == 0x696d6134) {
            uVar3 = 0x322;
            goto LAB_10044418d;
          }
          if (uVar4 != 0x696e3234) goto LAB_100443fcd;
        }
        goto LAB_100444188;
      }
      if ((int)uVar4 < 0x6c70636d) {
        if ((uVar4 == 0x696e3332) || (uVar4 == 0x6970636d)) goto LAB_100444188;
      }
      else {
        if (uVar4 == 0x6c70636d) goto LAB_100444188;
        if (uVar4 == 0x6d703461) {
          uVar3 = 0x1f6;
          if (lVar7 != 0) {
            lVar8 = _CMAudioFormatDescriptionGetStreamBasicDescription(lVar7);
            if (lVar8 == 0) goto LAB_100444259;
            iVar5 = *(int *)(lVar8 + 8);
            goto LAB_100444238;
          }
          goto LAB_10044418d;
        }
      }
      goto LAB_100443fcd;
    }
    if ((int)uVar4 < 0x616c6177) {
      if ((int)uVar4 < 0x61616163) {
        if (uVar4 != 0x2e6d7033) {
          if (uVar4 == 0x32336e69) goto LAB_100444188;
          if (uVar4 != 0x41554442) goto LAB_100443fcd;
          uVar3 = 1;
          if (lVar7 != 0) {
            pdVar11 = (double *)_CMAudioFormatDescriptionGetStreamBasicDescription(lVar7);
            if (pdVar11 == (double *)0x0) {
LAB_100444259:
              uVar12 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar12,0x10);
              if (cVar2 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "audioDesc != __null";
                __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,
                                    0x16);
              }
              FUN_1001782e9(0,0);
            }
            else {
              dVar1 = *pdVar11;
              if (((dVar1 != _DAT_100749b30) || (NAN(dVar1) || NAN(_DAT_100749b30))) ||
                 (uVar3 = 0x192, *(int *)((long)pdVar11 + 0x14) != 0x90)) {
                uVar3 = 1;
                if (((dVar1 == _DAT_100749b38) && (!NAN(dVar1) && !NAN(_DAT_100749b38))) &&
                   (uVar3 = 1, *(int *)((long)pdVar11 + 0x14) == 0xa0)) {
                  uVar3 = 0x193;
                }
              }
            }
          }
        }
      }
      else if (uVar4 == 0x61616163) {
        uVar3 = 0x196;
      }
      else if (uVar4 == 0x61632d33) {
        uVar3 = 0x385;
      }
      else {
        if (uVar4 != 0x616c6163) goto LAB_100443fcd;
        uVar3 = 0x259;
      }
    }
    else if ((int)uVar4 < 0x65632d33) {
      if (uVar4 == 0x616c6177) {
        uVar3 = 0x324;
      }
      else if (uVar4 == 0x64726d73) {
        iVar5 = _CMFormatDescriptionGetMediaSubType(lVar7);
        uVar3 = 999;
        if ((iVar5 != 0x61632d33) && (iVar5 != 0x70616333)) {
LAB_100444238:
          uVar3 = FUN_10044a67e(iVar5);
        }
      }
      else {
        if (uVar4 != 0x65632b33) goto LAB_100443fcd;
        uVar3 = 0x44d;
      }
    }
    else if ((int)uVar4 < 0x666c3634) {
      if (uVar4 == 0x65632d33) {
        uVar3 = 0x386;
      }
      else {
        if (uVar4 != 0x666c3332) goto LAB_100443fcd;
LAB_100444188:
        uVar3 = 0x2bd;
      }
    }
    else {
      if (uVar4 == 0x666c3634) goto LAB_100444188;
      if (uVar4 != 0x666c6163) goto LAB_100443fcd;
      uVar3 = 0x25a;
    }
  }
LAB_10044418d:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    lVar7 = _CMAudioFormatDescriptionGetStreamBasicDescription(lVar7);
    if (lVar7 != 0) {
      *param_2 = *(undefined4 *)(lVar7 + 0x1c);
    }
  }
LAB_1004441ac:
  FUN_10017060f(lVar6);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

