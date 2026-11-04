// name: FUN_1005d300f
// address: 1005d300f

int * FUN_1005d300f(int *param_1,int *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == (int *)0x0) || (*param_2 != 0x61727477)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "( ((inArtwork) != __null) && ((inArtwork)->magic == \'artw\') )";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar7 = *(int *)(PTR__CGRectZero_10082e360 + 4);
    iVar8 = *(int *)(PTR__CGRectZero_10082e360 + 8);
    iVar9 = *(int *)(PTR__CGRectZero_10082e360 + 0xc);
    iVar10 = *(int *)(PTR__CGRectZero_10082e360 + 0x10);
    iVar11 = *(int *)(PTR__CGRectZero_10082e360 + 0x14);
    iVar12 = *(int *)(PTR__CGRectZero_10082e360 + 0x18);
    iVar13 = *(int *)(PTR__CGRectZero_10082e360 + 0x1c);
    *param_1 = *(int *)PTR__CGRectZero_10082e360;
    param_1[1] = iVar7;
    param_1[2] = iVar8;
    param_1[3] = iVar9;
    param_1[4] = iVar10;
    param_1[5] = iVar11;
    param_1[6] = iVar12;
    param_1[7] = iVar13;
    goto LAB_1005d30b4;
  }
  if ((char)param_2[0x1c] == '\0') {
    if ((param_2[0x12] | 2U) != 0x232a) {
      if ((*(long *)(param_2 + 0x24) != 0) &&
         (lVar4 = _CGImageSourceCreateWithData(*(long *)(param_2 + 0x24),0), lVar4 != 0)) {
        lVar5 = _CGImageSourceCopyPropertiesAtIndex(lVar4,0,0);
        if (lVar5 != 0) {
          cVar2 = FUN_100167c17(lVar5,*(undefined8 *)PTR__kCGImagePropertyOrientation_10082e890);
          iVar7 = *(int *)(PTR__CGRectZero_10082e360 + 4);
          iVar8 = *(int *)(PTR__CGRectZero_10082e360 + 8);
          iVar9 = *(int *)(PTR__CGRectZero_10082e360 + 0xc);
          iVar10 = *(int *)(PTR__CGRectZero_10082e360 + 0x10);
          iVar11 = *(int *)(PTR__CGRectZero_10082e360 + 0x14);
          iVar12 = *(int *)(PTR__CGRectZero_10082e360 + 0x18);
          iVar13 = *(int *)(PTR__CGRectZero_10082e360 + 0x1c);
          param_2[0x14] = *(int *)PTR__CGRectZero_10082e360;
          param_2[0x15] = iVar7;
          param_2[0x16] = iVar8;
          param_2[0x17] = iVar9;
          param_2[0x18] = iVar10;
          param_2[0x19] = iVar11;
          param_2[0x1a] = iVar12;
          param_2[0x1b] = iVar13;
          uVar3 = *(undefined8 *)PTR__kCGImagePropertyPixelWidth_10082e8a0;
          uVar1 = FUN_100167f44(lVar5,uVar3);
          *(undefined8 *)(param_2 + 0x18) = uVar1;
          uVar1 = *(undefined8 *)PTR__kCGImagePropertyPixelHeight_10082e898;
          uVar6 = FUN_100167f44(lVar5,uVar1);
          *(undefined8 *)(param_2 + 0x1a) = uVar6;
          uVar6 = uVar1;
          if ((byte)(cVar2 - 5U) < 4) {
            uVar6 = uVar3;
            uVar3 = uVar1;
          }
          uVar3 = FUN_100167f44(lVar5,uVar3);
          *(undefined8 *)(param_2 + 0x18) = uVar3;
          uVar3 = FUN_100167f44(lVar5,uVar6);
          *(undefined8 *)(param_2 + 0x1a) = uVar3;
          *(undefined1 *)(param_2 + 0x1c) = 1;
          FUN_10017060f(lVar5);
        }
        FUN_10017060f(lVar4);
      }
      if ((char)param_2[0x1c] != '\0') goto LAB_1005d3048;
    }
    iVar7 = *(int *)PTR__CGRectZero_10082e360;
    iVar8 = *(int *)(PTR__CGRectZero_10082e360 + 4);
    iVar9 = *(int *)(PTR__CGRectZero_10082e360 + 8);
    iVar10 = *(int *)(PTR__CGRectZero_10082e360 + 0xc);
    iVar11 = *(int *)(PTR__CGRectZero_10082e360 + 0x10);
    iVar12 = *(int *)(PTR__CGRectZero_10082e360 + 0x14);
    iVar13 = *(int *)(PTR__CGRectZero_10082e360 + 0x18);
    iVar14 = *(int *)(PTR__CGRectZero_10082e360 + 0x1c);
  }
  else {
LAB_1005d3048:
    iVar7 = param_2[0x14];
    iVar8 = param_2[0x15];
    iVar9 = param_2[0x16];
    iVar10 = param_2[0x17];
    iVar11 = param_2[0x18];
    iVar12 = param_2[0x19];
    iVar13 = param_2[0x1a];
    iVar14 = param_2[0x1b];
  }
  param_1[4] = iVar11;
  param_1[5] = iVar12;
  param_1[6] = iVar13;
  param_1[7] = iVar14;
  *param_1 = iVar7;
  param_1[1] = iVar8;
  param_1[2] = iVar9;
  param_1[3] = iVar10;
LAB_1005d30b4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

