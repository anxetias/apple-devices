// name: FUN_1002a0d19
// address: 1002a0d19

int FUN_1002a0d19(long param_1,long param_2,long param_3,uint param_4,undefined4 param_5,
                 long param_6,int param_7,int param_8,undefined8 param_9,long param_10,long param_11
                 ,long param_12,long *param_13)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 local_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  long local_4c0;
  undefined1 local_4b8 [16];
  undefined8 local_4a8 [2];
  uint local_494;
  long local_490;
  long local_488;
  long local_480;
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  char *local_46a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_488 = CONCAT44(local_488._4_4_,param_5);
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4c0 = param_6;
  local_494 = param_4;
  iVar7 = FUN_10058ed73(param_2);
  if (param_13 == (long *)0x0 || iVar7 != -0x2b) {
    local_480 = param_1;
    if (iVar7 == -0x80) goto LAB_1002a0f1c;
    if (iVar7 == 0) {
      if ((*(int *)(param_2 + 0x10) == 5) && (iVar7 = -0x80, *(char *)(param_2 + 0x53) != '\x01'))
      goto LAB_1002a0f1c;
      local_490 = param_3 + (ulong)local_494 * 0xd38;
      *(undefined1 *)(param_3 + 0xcfa + (ulong)local_494 * 0xd38) = *(undefined1 *)(param_1 + 0x80);
      if ((char)local_488 == '\0') {
        local_488 = local_490 + 0x890;
        lVar9 = FUN_1004968c5(param_1);
        while (lVar4 = lVar9, lVar4 != 0) {
          lVar9 = FUN_100496985(lVar4);
          if (899 < *(uint *)(lVar4 + 0x10)) {
            iVar7 = FUN_10049980b(lVar4,local_488,0);
            if (iVar7 != -0x80) {
              if (iVar7 == 0) goto LAB_1002a11d1;
              uVar10 = FUN_1001cc310();
              uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
              cVar5 = _os_log_type_enabled(uVar10,0x10);
              if (cVar5 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_58,0x12
                                   );
              }
              (*(code *)PTR__objc_release_10082c7b0)(uVar10);
              if (iVar7 == 0) goto LAB_1002a11d1;
            }
            FUN_100497f5f(lVar4);
          }
        }
        iVar7 = *(int *)(local_480 + 0x18);
        FUN_1001b7b04(&local_58,"T%S.ithmb");
        FUN_1001b90b6(local_4a8,*(undefined4 *)(local_480 + 0x18));
        FUN_1001bbec4(local_4b8,&local_58,local_4a8);
        FUN_1001b7a50(local_4a8);
        FUN_1001b7a50(&local_58);
        FUN_1001bb41a(local_4b8,&local_478);
        lVar9 = local_4c0 + (ulong)(((iVar7 + 4U) / 0x33) * -0x33 + iVar7 + 4) * 0x420;
        iVar7 = FUN_10017ecc9(lVar9,&local_478,local_488,&local_510);
        if (iVar7 == 0) {
          if ((char)local_510 == '\0') {
            if (local_510._3_1_ == '\0') {
              iVar8 = FUN_10017cc65(local_488,0x64617461,3,local_4a8);
              if (iVar8 != -0x80) {
                if (iVar8 == 0) {
                  iVar8 = 0;
                  FUN_10017cdfb(local_4a8[0]);
                }
                else {
                  uVar10 = FUN_1001cc310();
                  uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
                  cVar5 = _os_log_type_enabled(uVar10,0x10);
                  if (cVar5 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x400;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar8);
                    __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                  (*(code *)PTR__objc_release_10082c7b0)(uVar10);
                }
              }
            }
            else {
              uVar10 = FUN_1001cc310();
              uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
              cVar5 = _os_log_type_enabled(uVar10,0x10);
              if (cVar5 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "fileSpecInfo.isLocked == false";
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,
                                    0x16);
              }
              (*(code *)PTR__objc_release_10082c7b0)(uVar10);
              iVar8 = -0x2d;
              FUN_1001782e9(0,0);
            }
          }
          else {
            uVar10 = FUN_1001cc310();
            uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "fileSpecInfo.isDirectory == false";
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            (*(code *)PTR__objc_release_10082c7b0)(uVar10);
            iVar8 = -0x516;
            FUN_1001782e9(0,0);
          }
LAB_1002a115d:
          if (iVar8 != 0) {
LAB_1002a1162:
            FUN_1001c62d9(local_488,0x420);
            FUN_1001b7a50(local_4b8);
            iVar7 = -0x80;
            if (iVar8 != -0x80) {
              uVar10 = FUN_1001cc310();
              uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
              cVar5 = _os_log_type_enabled(uVar10,0x10);
              if (cVar5 != '\0') {
                local_478 = 0x8220202;
                local_474 = "Assertion failure";
                local_46c = 0x400;
                local_46a = (char *)CONCAT44(local_46a._4_4_,iVar8);
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_478,
                                    0x12);
              }
              (*(code *)PTR__objc_release_10082c7b0)(uVar10);
              iVar7 = iVar8;
            }
            goto LAB_1002a0f1c;
          }
        }
        else {
          iVar8 = FUN_10018156b(lVar9,&local_478,0x686f6f6b,0x72617720,local_488);
          if (iVar8 == -0x80) goto LAB_1002a1162;
          if (iVar8 != 0) {
            uVar10 = FUN_1001cc310();
            uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar8);
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
            (*(code *)PTR__objc_release_10082c7b0)(uVar10);
            goto LAB_1002a115d;
          }
          *(undefined1 *)(local_490 + 0xcb0) = 1;
        }
        FUN_1001b7a50(local_4b8);
      }
LAB_1002a11d1:
      if (*(int *)(param_2 + 0x10) == 5) {
        cVar5 = FUN_1002a3daf(local_480,*(undefined2 *)(param_2 + 0x47c),&local_510);
        if (cVar5 == '\0') {
          uVar10 = FUN_1001cc310();
          uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
          cVar5 = _os_log_type_enabled(uVar10,0x10);
          if (cVar5 != '\0') {
            local_478 = 0x8220202;
            local_474 = "Assertion failure";
            local_46c = 0x822;
            local_46a = 
            "GetFaceAlbumGUIDForFaceIndex(imageInfo, sourceImageInstance->faceIndex, &faceAlbumGUID)"
            ;
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar10);
          FUN_1001782e9(0,0);
          iVar7 = 0x459;
          goto LAB_1002a0f1c;
        }
        *(undefined4 *)(local_490 + 0x876) = local_510;
        *(undefined4 *)(local_490 + 0x87a) = uStack_50c;
        *(undefined4 *)(local_490 + 0x87e) = uStack_508;
        *(undefined4 *)(local_490 + 0x882) = uStack_504;
      }
      iVar7 = FUN_1002a2ec6(local_480,&local_478);
      lVar9 = local_490;
      if (iVar7 == 0) {
        _memcpy((void *)(local_490 + 0x430),&local_478,0x420);
        *(undefined1 *)(lVar9 + 0x850) = 1;
      }
      cVar5 = FUN_10058f971(local_480);
      if (cVar5 == '\0') {
        uVar6 = 0;
      }
      else {
        uVar6 = __os_feature_enabled_impl("AMPLibrary","PhotoKitCloudDownload");
      }
      lVar9 = local_490;
      *(undefined1 *)(local_490 + 8) = uVar6;
      _memcpy((void *)(local_490 + 0x10),(void *)(param_2 + 0x58),0x420);
      *(undefined4 *)(lVar9 + 0x870) = *(undefined4 *)(param_2 + 0x10);
      *(undefined2 *)(lVar9 + 0x874) = *(undefined2 *)(param_2 + 0x47c);
      *(undefined4 *)(lVar9 + 0xcb4) = *(undefined4 *)(local_480 + 0x18);
      uVar1 = *(undefined4 *)(local_480 + 0x2c);
      uVar2 = *(undefined4 *)(local_480 + 0x30);
      uVar3 = *(undefined4 *)(local_480 + 0x34);
      *(undefined4 *)(lVar9 + 0xcb8) = *(undefined4 *)(local_480 + 0x28);
      *(undefined4 *)(lVar9 + 0xcbc) = uVar1;
      *(undefined4 *)(lVar9 + 0xcc0) = uVar2;
      *(undefined4 *)(lVar9 + 0xcc4) = uVar3;
      FUN_1001c631b(param_9,lVar9 + 0x886,6);
      if (param_10 != 0) {
        *(ulong *)(local_490 + 0xcc8) = param_10 + (ulong)(param_8 * local_494) * 4;
      }
      *(ulong *)(local_490 + 0xcd0) = param_11 + (ulong)(param_7 * local_494) * 4;
      *(ulong *)(local_490 + 0xcd8) = param_12 + (ulong)(param_7 * local_494) * 0x20;
      iVar7 = 0;
      goto LAB_1002a0f1c;
    }
  }
  else {
    (**(code **)(*param_13 + 8))(param_13,param_2);
    *(undefined1 *)(param_1 + 0xd4) = 1;
  }
  uVar10 = FUN_1001cc310();
  uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
  cVar5 = _os_log_type_enabled(uVar10,0x10);
  if (cVar5 != '\0') {
    local_478 = 0x8220202;
    local_474 = "Assertion failure";
    local_46c = 0x400;
    local_46a = (char *)CONCAT44(local_46a._4_4_,iVar7);
    __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_478,0x12);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar10);
LAB_1002a0f1c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

