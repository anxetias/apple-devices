// name: FUN_1004b9b0a
// address: 1004b9b0a

int FUN_1004b9b0a(long param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  uInt uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Bytef *pBVar8;
  z_streamp strm;
  ulong uVar9;
  ulong uVar10;
  ulong local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x10) != 0x6c656166)) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "( ((inLeafInfo) != __null) && ((inLeafInfo)->magic == \'leaf\') )";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = 0x1f49;
    goto LAB_1004b9d23;
  }
  lVar5 = *(long *)(param_1 + 0xb28);
  if (lVar5 == 0) {
    lVar5 = FUN_100170ea9(DAT_1008c4d90,0);
    *(long *)(param_1 + 0xb28) = lVar5;
  }
  FUN_1001710c1(lVar5,param_2,param_3);
  if (*(char *)(param_1 + 0xb1a) == '\0') {
    uVar6 = FUN_100170f3b(lVar5);
    uVar7 = FUN_100170ef7(lVar5);
    cVar1 = FUN_10019732d(uVar6,uVar7,&local_58);
    *(char *)(param_1 + 0xb1a) = cVar1;
    if (cVar1 != '\x01') {
      iVar4 = -0x32;
      if (cVar1 != '\x02') {
        iVar4 = 0;
      }
      goto LAB_1004b9d23;
    }
    FUN_10017113d(lVar5,0,local_58);
  }
  strm = *(z_streamp *)(param_1 + 0xb20);
  if (strm == (z_streamp)0x0) {
    strm = (z_streamp)FUN_1001c6429(0x70);
    if (strm != (z_streamp)0x0) {
      iVar4 = _inflateInit2_(strm,-0xf,"1.2.12",0x70);
      if (iVar4 != 0) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "gzipStatus == 0";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        FUN_1001c64c1(strm);
        iVar4 = -0x32;
        goto LAB_1004b9d23;
      }
      *(z_streamp *)(param_1 + 0xb20) = strm;
      goto LAB_1004b9bd5;
    }
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_4a = "gzipStream != nullptr";
      goto LAB_1004ba009;
    }
  }
  else {
LAB_1004b9bd5:
    pBVar8 = (Bytef *)FUN_100170f7f(lVar5);
    strm->next_in = pBVar8;
    uVar2 = FUN_100170ef7(lVar5);
    strm->avail_in = uVar2;
    strm->total_in = 0;
    uVar10 = (((ulong)(uVar2 * 3) + 63999) / 64000) * 64000;
    pBVar8 = (Bytef *)FUN_1001c63e1(uVar10);
    if (pBVar8 != (Bytef *)0x0) {
      do {
        strm->next_out = pBVar8;
        strm->avail_out = (uInt)uVar10;
        strm->total_out = 0;
        iVar3 = _inflate(strm,2);
        if (iVar3 != 0) {
          iVar4 = -0x32;
          if (iVar3 != 1) goto LAB_1004b9f3e;
          iVar3 = _inflateEnd(strm);
          if (iVar3 != 0) {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "gzipStatus == 0";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            goto LAB_1004b9f3e;
          }
          uVar9 = strm->total_out;
          if (uVar9 != 0) {
            local_60 = uVar9;
            if (uVar10 < uVar9) {
              uVar6 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar6,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "outputCount <= outputLength";
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            iVar4 = (**(code **)(**(long **)(param_1 + 0xaa0) + 200))
                              (*(long **)(param_1 + 0xaa0),&local_60,pBVar8);
            goto LAB_1004b9f3e;
          }
          break;
        }
        uVar9 = strm->total_out;
        if (uVar9 != 0) {
          local_60 = uVar9;
          if (uVar10 < uVar9) {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "outputCount <= outputLength";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          iVar4 = (**(code **)(**(long **)(param_1 + 0xaa0) + 200))
                            (*(long **)(param_1 + 0xaa0),&local_60,pBVar8);
          if (iVar4 != 0) goto LAB_1004b9f3e;
        }
      } while (strm->avail_in != 0);
      iVar4 = 0;
LAB_1004b9f3e:
      uVar10 = strm->total_in;
      if (uVar10 != 0) {
        uVar9 = FUN_100170ef7(lVar5);
        if (uVar9 < uVar10) {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "gzipStream->total_in <= JRCFDataGetLength(inputData)";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        FUN_10017113d(lVar5,0,strm->total_in);
      }
      FUN_1001c64c1(pBVar8);
      goto LAB_1004b9d23;
    }
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_4a = "outputBuffer != __null";
LAB_1004ba009:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  FUN_1001782e9(0,0);
  iVar4 = -0x6c;
LAB_1004b9d23:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

