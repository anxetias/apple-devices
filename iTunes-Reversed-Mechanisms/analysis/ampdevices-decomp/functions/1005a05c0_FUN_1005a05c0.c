// name: FUN_1005a05c0
// address: 1005a05c0

undefined8 FUN_1005a05c0(int param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  short sVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  undefined4 uVar14;
  int local_d8;
  undefined8 uStack_d4;
  char cStack_cc;
  undefined1 uStack_cb;
  undefined2 uStack_ca;
  undefined2 uStack_c8;
  undefined2 uStack_c6;
  int iStack_c4;
  short sStack_c0;
  short sStack_be;
  short sStack_bc;
  undefined2 uStack_ba;
  undefined2 local_b8;
  short sStack_b6;
  undefined2 uStack_b4;
  undefined2 uStack_b2;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined1 uStack_a7;
  char cStack_a6;
  undefined5 uStack_a5;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  short local_68;
  short sStack_66;
  short sStack_64;
  undefined2 uStack_62;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar6 = FUN_10017076e(param_2);
  if (0 < lVar6) {
    sVar3 = (ushort)(2 < param_1 - 0x2717U) * 0x800 + 0x800;
    if (param_1 == 0x271f) {
      sVar3 = 0x800;
    }
    lVar12 = 0;
    do {
      lVar7 = FUN_10016499b(param_2,lVar12);
      if (lVar7 == 0) {
        uVar8 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar8,0x10);
        if (cVar4 != '\0') {
          local_4a = "imageFormatInfoDict != nullptr";
          goto LAB_1005a0c0c;
        }
LAB_1005a0c31:
        FUN_1001782e9(0,0);
        uVar8 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar8,0x10);
        uVar11 = 0x460;
        if (cVar4 != '\0') {
          local_d8 = 0x8220202;
          uStack_d4 = "Assertion failure";
          cStack_cc = '\0';
          uStack_cb = 4;
          uStack_ca = 0x460;
          uStack_c8 = 0;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_d8,0x12);
        }
        goto LAB_1005a0c58;
      }
      if (0x13 < *(uint *)(param_3 + 0x10)) {
        uVar8 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar8,0x10);
        if (cVar4 != '\0') {
          local_4a = "imageFormatList->numImageFormats < 20";
          goto LAB_1005a0c0c;
        }
        goto LAB_1005a0c31;
      }
      FUN_1001c62d9(&local_d8,0x78);
      uStack_b4 = 0;
      uStack_a7 = 1;
      uStack_80 = 220000;
      local_78 = 0x7fc00000000003ff;
      FUN_10059def0(lVar7,&PTR_s_FormatId_10086d8d0,0x2b,&local_d8);
      iVar13 = iStack_c4;
      cVar4 = FUN_10023dd6e(iStack_c4);
      if (cVar4 == '\0') {
        uVar8 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar8,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "IsSupportedThumbnailFormat(imageDesc.formatInfo.outputFormat)";
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar13 = iStack_c4;
      }
      sVar9 = 2;
      iVar5 = 0x10;
      if (iVar13 < 0x42475241) {
        if (iVar13 < 0x32767579) {
          if (iVar13 != 0x10) {
            if (iVar13 == 0x20) goto LAB_1005a0778;
LAB_1005a0771:
            sVar9 = 0;
            iVar5 = iVar13;
          }
        }
        else if (iVar13 == 0x32767579) {
LAB_1005a0783:
          iVar5 = 0x32767579;
        }
        else {
          if (iVar13 == 0x41424752) goto LAB_1005a0778;
          if (iVar13 != 0x42353635) goto LAB_1005a0771;
        }
      }
      else if (iVar13 < 0x4c353635) {
        if (iVar13 == 0x42475241) goto LAB_1005a0778;
        if (iVar13 != 0x4c353535) goto LAB_1005a0771;
      }
      else if (iVar13 != 0x4c353635) {
        if (iVar13 == 0x79343230) goto LAB_1005a0783;
        if (iVar13 != 0x52474241) goto LAB_1005a0771;
LAB_1005a0778:
        sVar9 = 4;
        iVar5 = 0x20;
      }
      uStack_c8 = (undefined2)iVar5;
      uStack_c6 = (undefined2)((uint)iVar5 >> 0x10);
      if (sStack_b6 == 0) {
        sStack_b6 = sVar9;
      }
      if (sStack_be == 0) {
        sStack_be = sStack_bc;
        sStack_bc = 0;
      }
      if (local_d8 == 0) {
        uVar8 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar8,0x10);
        if (cVar4 != '\0') {
          local_4a = "imageDesc.formatID != 0";
LAB_1005a0c0c:
          local_4c = 0x822;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        goto LAB_1005a0c31;
      }
      if (iVar5 == 0) {
        uVar8 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar8,0x10);
        if (cVar4 != '\0') {
          local_4a = "imageDesc.formatInfo.baseFormat != 0";
          goto LAB_1005a0c0c;
        }
        goto LAB_1005a0c31;
      }
      if (((sStack_b6 == 0) && (iVar5 != 0x6a706567)) && (iVar5 != 0x706e6720)) {
        uVar8 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar8,0x10);
        if (cVar4 != '\0') {
          local_4a = 
          "imageDesc.formatInfo.bytesPerPixel != 0 || IsCompressedThumbnailFormat(imageDesc.formatInfo.baseFormat)"
          ;
          goto LAB_1005a0c0c;
        }
        goto LAB_1005a0c31;
      }
      if ((sStack_be == 0 || sStack_c0 == 0) && (local_68 == 0)) {
        uVar8 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar8,0x10);
        if (cVar4 != '\0') {
          local_4a = 
          "(imageDesc.formatInfo.width != 0 && imageDesc.formatInfo.height != 0) || (imageDesc.formatInfo.minSmall != 0)"
          ;
          goto LAB_1005a0c0c;
        }
        goto LAB_1005a0c31;
      }
      if ((iVar13 == 0x706e6720) || (iVar13 == 0x6a706567)) {
        if (cStack_a6 == '\0') {
          if (iStack_9c == 0) {
            if ((NAN(local_78._4_4_)) ||
               ((DAT_10070bcfc <= local_78._4_4_ && (local_78._4_4_ <= DAT_100700b50))))
            goto LAB_1005a0866;
            uVar8 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar8,0x10);
            if (cVar4 != '\0') {
              local_4a = 
              "std::isnan(imageDesc.formatInfo.qualityFloat) || (imageDesc.formatInfo.qualityFloat >= 0 && imageDesc.formatInfo.qualityFloat <= 1.0)"
              ;
              goto LAB_1005a0c0c;
            }
          }
          else {
            uVar8 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar8,0x10);
            if (cVar4 != '\0') {
              local_4a = "imageDesc.formatInfo.alignFileOffset == 0";
              goto LAB_1005a0c0c;
            }
          }
        }
        else {
          uVar8 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar8,0x10);
          if (cVar4 != '\0') {
            local_4a = "imageDesc.formatInfo.longAlign == false";
            goto LAB_1005a0c0c;
          }
        }
        goto LAB_1005a0c31;
      }
LAB_1005a0866:
      if (((cStack_cc != '\0') && (sStack_66 == 0)) && (uVar10 = param_1 - 0x2714, uVar10 < 0xf)) {
        uVar14 = DAT_100759770;
        sStack_64 = sVar3;
        if (((0x59fcU >> (uVar10 & 0x1f) & 1) == 0) &&
           (uVar14 = DAT_100759750, sStack_64 = 0x1000, (0x2600U >> (uVar10 & 0x1f) & 1) == 0)) {
          uVar14 = DAT_100759760;
          sStack_64 = 0x800;
        }
        local_68 = (short)uVar14;
        sStack_66 = (short)((uint)uVar14 >> 0x10);
        uStack_62 = 2;
      }
      uVar10 = *(uint *)(param_3 + 0x10);
      lVar7 = (ulong)uVar10 * 0x78;
      *(ulong *)(param_3 + 0x88 + lVar7) =
           CONCAT26(uStack_62,CONCAT24(sStack_64,CONCAT22(sStack_66,local_68)));
      puVar2 = (undefined8 *)(param_3 + 0x78 + lVar7);
      *puVar2 = local_78;
      puVar2[1] = uStack_70;
      puVar2 = (undefined8 *)(param_3 + 0x68 + lVar7);
      *puVar2 = local_88;
      puVar2[1] = CONCAT44(uStack_7c,uStack_80);
      puVar2 = (undefined8 *)(param_3 + 0x58 + lVar7);
      *puVar2 = local_98;
      puVar2[1] = uStack_90;
      puVar2 = (undefined8 *)(param_3 + 0x48 + lVar7);
      *puVar2 = CONCAT53(uStack_a5,CONCAT12(cStack_a6,CONCAT11(uStack_a7,local_a8)));
      puVar2[1] = CONCAT44(iStack_9c,uStack_a0);
      puVar2 = (undefined8 *)(param_3 + 0x38 + lVar7);
      *puVar2 = CONCAT26(uStack_b2,CONCAT24(uStack_b4,CONCAT22(sStack_b6,local_b8)));
      puVar2[1] = uStack_b0;
      puVar2 = (undefined8 *)(param_3 + 0x28 + lVar7);
      *puVar2 = CONCAT44(iStack_c4,iVar5);
      puVar2[1] = CONCAT26(uStack_ba,CONCAT24(sStack_bc,CONCAT22(sStack_be,sStack_c0)));
      piVar1 = (int *)(param_3 + 0x18 + lVar7);
      *piVar1 = local_d8;
      piVar1[1] = (int)uStack_d4;
      piVar1[2] = uStack_d4._4_4_;
      piVar1[3] = CONCAT22(uStack_ca,CONCAT11(uStack_cb,cStack_cc));
      *(uint *)(param_3 + 0x10) = uVar10 + 1;
      lVar12 = lVar12 + 1;
    } while (lVar6 != lVar12);
  }
  uVar11 = 0;
LAB_1005a0c58:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar11;
}

