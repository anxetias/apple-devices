// name: FUN_1005d20ad
// address: 1005d20ad

int FUN_1005d20ad(long param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  iVar9 = FUN_1005d24c1(param_2,param_3,&local_60);
  if (iVar9 != 0) {
    uVar10 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar10,0x10);
    if (cVar8 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar9);
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    goto LAB_1005d22a0;
  }
  if (param_1 == 0) {
    *(undefined4 *)(local_60 + 0x48) = 9000;
    lVar11 = 0;
    lVar14 = local_60;
LAB_1005d21d1:
    *param_4 = lVar14;
    FUN_10017060f(lVar11);
    iVar9 = 0;
  }
  else {
    lVar11 = FUN_1001705fc(param_1);
    lVar14 = local_60;
    *(long *)(local_60 + 0x90) = lVar11;
    if (lVar11 == 0) {
      uVar10 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar10,0x10);
      iVar9 = -0x6c;
      if (cVar8 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "artwork->artworkData != __null";
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      uVar10 = 0;
      lVar11 = 0;
    }
    else {
      lVar11 = _CGImageSourceCreateWithData(param_1,0);
      if ((lVar11 != 0) && (lVar12 = _CGImageSourceGetCount(lVar11), lVar12 != 0)) {
        if (param_2 == 0) {
          uVar10 = _CGImageSourceGetType(lVar11);
          param_2 = FUN_1005d1a54(uVar10);
        }
        if (param_2 - 0xdU < 2) {
          *(int *)(lVar14 + 0x48) = param_2;
        }
        else {
          lVar12 = FUN_1001962a8(lVar11);
          if (lVar12 != 0) {
            FUN_10017060f(*(undefined8 *)(lVar14 + 0x90));
            *(long *)(lVar14 + 0x90) = lVar12;
            *(undefined4 *)(lVar14 + 0x48) = 0xe;
            lVar12 = _CGImageSourceCopyPropertiesAtIndex(lVar11,0,0);
            if (lVar12 != 0) {
              cVar8 = FUN_100167c17(lVar12,*(undefined8 *)PTR__kCGImagePropertyOrientation_10082e890
                                   );
              uVar1 = *(undefined4 *)(PTR__CGRectZero_10082e360 + 4);
              uVar2 = *(undefined4 *)(PTR__CGRectZero_10082e360 + 8);
              uVar3 = *(undefined4 *)(PTR__CGRectZero_10082e360 + 0xc);
              uVar4 = *(undefined4 *)(PTR__CGRectZero_10082e360 + 0x10);
              uVar5 = *(undefined4 *)(PTR__CGRectZero_10082e360 + 0x14);
              uVar6 = *(undefined4 *)(PTR__CGRectZero_10082e360 + 0x18);
              uVar7 = *(undefined4 *)(PTR__CGRectZero_10082e360 + 0x1c);
              *(undefined4 *)(lVar14 + 0x50) = *(undefined4 *)PTR__CGRectZero_10082e360;
              *(undefined4 *)(lVar14 + 0x54) = uVar1;
              *(undefined4 *)(lVar14 + 0x58) = uVar2;
              *(undefined4 *)(lVar14 + 0x5c) = uVar3;
              *(undefined4 *)(lVar14 + 0x60) = uVar4;
              *(undefined4 *)(lVar14 + 100) = uVar5;
              *(undefined4 *)(lVar14 + 0x68) = uVar6;
              *(undefined4 *)(lVar14 + 0x6c) = uVar7;
              uVar13 = *(undefined8 *)PTR__kCGImagePropertyPixelHeight_10082e898;
              uVar10 = *(undefined8 *)PTR__kCGImagePropertyPixelWidth_10082e8a0;
              if ((byte)(cVar8 - 5U) < 4) {
                uVar13 = *(undefined8 *)PTR__kCGImagePropertyPixelWidth_10082e8a0;
                uVar10 = *(undefined8 *)PTR__kCGImagePropertyPixelHeight_10082e898;
              }
              uVar10 = FUN_100167f44(lVar12,uVar10);
              *(undefined8 *)(lVar14 + 0x60) = uVar10;
              uVar10 = FUN_100167f44(lVar12,uVar13);
              *(undefined8 *)(lVar14 + 0x68) = uVar10;
              *(undefined1 *)(lVar14 + 0x70) = 1;
              FUN_10017060f(lVar12);
            }
          }
        }
        goto LAB_1005d21d1;
      }
      uVar13 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar13,0x10);
      iVar9 = -0xce;
      uVar10 = 0x400;
      if (cVar8 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "imageSource != __null && CGImageSourceGetCount(imageSource) > 0";
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
    }
    FUN_1001782e9(uVar10,0);
    FUN_10017060f(lVar11);
    FUN_1005d25cb(lVar14);
    *param_4 = 0;
  }
LAB_1005d22a0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar9;
}

