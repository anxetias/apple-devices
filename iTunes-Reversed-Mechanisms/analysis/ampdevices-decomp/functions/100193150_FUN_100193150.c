// name: FUN_100193150
// address: 100193150

int FUN_100193150(int param_1,int param_2,char param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *op;
  char cVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ID IVar7;
  long lVar8;
  undefined8 uVar9;
  cfstringStruct *pcVar10;
  undefined8 uVar11;
  undefined1 local_480 [16];
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_468 = param_4;
  local_470 = _objc_autoreleasePoolPush();
  if (param_2 == 0x646f6373 && param_1 == -0x8000) {
    uVar9 = FUN_1001cc310();
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      FUN_100694a06(uVar9);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar9);
    FUN_1001782e9(0,1);
    uVar9 = 8;
    bVar1 = false;
LAB_100193212:
    uVar11 = 0x10000;
    if (DAT_1008906bc == '\0') {
      uVar11 = uVar9;
    }
    if (bVar1) {
      uVar9 = uVar11;
    }
    uVar11 = 9;
LAB_10019322d:
    uVar9 = _NSSearchPathForDirectoriesInDomains(uVar11,uVar9,1);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    lVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar9,PTR_s_count_10088bdc0);
    lVar6 = 0;
    if (lVar5 != 0) {
      uVar11 = (*(code *)PTR__objc_msgSend_10082c770)(uVar9,PTR_s_objectAtIndex__10088bf78,0);
      lVar6 = _objc_retainAutoreleasedReturnValue(uVar11);
      if (param_2 < 0x7066726d) {
        if (param_2 == 0x6672616d) {
          pcVar10 = &cf_Frameworks;
        }
        else {
          if (param_2 != 0x6c6f6773) goto LAB_100193306;
          pcVar10 = &cf_Logs;
        }
      }
      else if (param_2 == 0x7066726d) {
        pcVar10 = &cf_PrivateFrameworks;
      }
      else if (param_2 == 0x70726566) {
        pcVar10 = &cf_Preferences;
      }
      else {
        if (param_2 != 0x73646174) goto LAB_100193306;
        pcVar10 = &cf_Shared;
      }
      uVar11 = (*(code *)PTR__objc_msgSend_10082c770)
                         (lVar6,PTR_s_stringByAppendingPathComponent__10088bf80,pcVar10);
      lVar5 = _objc_retainAutoreleasedReturnValue(uVar11);
      (*(code *)PTR__objc_release_10082c7b0)(lVar6);
      lVar6 = lVar5;
    }
LAB_100193306:
    (*(code *)PTR__objc_release_10082c7b0)(uVar9);
LAB_10019330f:
    op = PTR_s_fileURLWithPath_isDirectory__10088bf88;
    if (lVar6 != 0) {
      IVar7 = NSURL::fileURLWithPath_isDirectory_
                        ((ID)PTR__OBJC_CLASS___NSURL_10082dfd8,
                         PTR_s_fileURLWithPath_isDirectory__10088bf88,lVar6,1);
      lVar5 = _objc_retainAutoreleasedReturnValue(IVar7);
      if (lVar5 == 0) {
        iVar4 = -0x78;
        lVar5 = 0;
      }
      else {
        cVar2 = FUN_10016ffd2(lVar5,local_468,0);
        iVar4 = 0;
        if (cVar2 == '\0') {
          iVar4 = -0x78;
        }
        if ((param_3 != '\0') && (cVar2 == '\0')) {
          uVar9 = (*(code *)PTR__objc_msgSend_10082c770)(lVar6,PTR_s_lastPathComponent_10088bf90);
          local_460 = _objc_retainAutoreleasedReturnValue(uVar9);
          uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                            (lVar6,PTR_s_stringByDeletingLastPathComponen_10088bf98);
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          IVar7 = NSURL::fileURLWithPath_isDirectory_
                            ((ID)PTR__OBJC_CLASS___NSURL_10082dfd8,op,uVar9,1);
          lVar8 = _objc_retainAutoreleasedReturnValue(IVar7);
          (*(code *)PTR__objc_release_10082c7b0)(lVar5);
          if ((lVar8 != 0) && (cVar2 = FUN_10016ffd2(lVar8,local_458,0), cVar2 != '\0')) {
            FUN_1001b7eb0(local_480,local_460);
            iVar4 = FUN_100188da2(local_458,local_480,local_468);
            FUN_1001b7a50(local_480);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar9);
          (*(code *)PTR__objc_release_10082c7b0)(local_460);
          lVar5 = lVar8;
        }
      }
      (*(code *)PTR__objc_release_10082c7b0)(lVar5);
      (*(code *)PTR__objc_release_10082c7b0)(lVar6);
      goto LAB_100193760;
    }
  }
  else {
    switch(param_1) {
    case -0x8000:
    case -0x7fff:
    case -0x7ffe:
      uVar9 = 8;
      break;
    case -0x7ffd:
      uVar9 = 2;
      break;
    case -0x7ffc:
      uVar9 = 4;
      break;
    case -0x7ffb:
      uVar9 = 1;
      bVar1 = true;
      goto LAB_1001934bc;
    default:
      uVar9 = FUN_1001cc310();
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        FUN_100694af2(uVar9);
      }
      goto LAB_100193748;
    }
    bVar1 = false;
LAB_1001934bc:
    if (param_2 < 0x6b657874) {
      if (0x6465736a < param_2) {
        if (param_2 < 0x646f6373) {
          if (param_2 == 0x6465736b) {
            if (param_1 == -0x7fff) {
              uVar9 = 1;
            }
            uVar11 = 0xc;
            goto LAB_10019322d;
          }
          if (param_2 == 0x646c6962) {
            uVar11 = 0x10000;
            if (DAT_1008906bc == '\0') {
              uVar11 = uVar9;
            }
            if (bVar1) {
              uVar9 = uVar11;
            }
            goto LAB_10019368d;
          }
        }
        else {
          if (param_2 == 0x646f6373) goto LAB_100193212;
          if (param_2 == 0x666c6e74) goto LAB_100193697;
          if (param_2 == 0x6672616d) goto LAB_10019368d;
        }
        goto LAB_10019371f;
      }
      if (param_2 < 0x61737570) {
        if (param_2 == -0x4a9b909d) {
          uVar11 = 0x12;
        }
        else {
          uVar11 = 1;
          if (param_2 != 0x61707073) goto LAB_10019371f;
        }
      }
      else {
        if (param_2 == 0x61737570) goto LAB_100193614;
        if (param_2 != 0x63616368) {
          if (param_2 == 0x63757372) {
            uVar9 = _NSHomeDirectory();
            lVar6 = _objc_retainAutoreleasedReturnValue(uVar9);
            goto LAB_10019330f;
          }
          goto LAB_10019371f;
        }
        uVar11 = 0x10000;
        if (DAT_1008906bc == '\0') {
          uVar11 = uVar9;
        }
        if (bVar1) {
          uVar9 = uVar11;
        }
        uVar11 = 0xd;
      }
      goto LAB_10019322d;
    }
    if (param_2 < 0x7066726d) {
      if (param_2 < 0x6d616373) {
        if (param_2 != 0x6b657874) {
          if (param_2 == 0x6c6f6773) goto LAB_10019368d;
          goto LAB_10019371f;
        }
      }
      else if (param_2 != 0x6d616373) {
        if (param_2 == 0x6d646f63) {
          uVar11 = 0x11;
        }
        else {
          if (param_2 != 0x70646f63) goto LAB_10019371f;
          uVar11 = 0x13;
        }
        goto LAB_10019322d;
      }
LAB_100193614:
      sVar3 = _FSFindFolder((int)(short)param_1,param_2,param_3,local_458);
      if (sVar3 == 0) {
        iVar4 = FUN_10018e6ca(local_458,local_468);
      }
      else {
        iVar4 = (int)sVar3;
      }
      goto LAB_100193760;
    }
    if (0x74656d6f < param_2) {
      if (param_2 != 0x74656d70) {
        if (param_2 == 0x75737273) {
          uVar11 = 7;
          goto LAB_10019322d;
        }
        if (param_2 == 0x757469c4) goto LAB_100193614;
        goto LAB_10019371f;
      }
LAB_100193697:
      uVar9 = _NSTemporaryDirectory();
      lVar6 = _objc_retainAutoreleasedReturnValue(uVar9);
      goto LAB_10019330f;
    }
    if ((param_2 == 0x7066726d) || (param_2 == 0x70726566)) {
LAB_10019368d:
      uVar11 = 5;
      goto LAB_10019322d;
    }
    if (param_2 == 0x73646174) goto LAB_100193614;
LAB_10019371f:
    uVar9 = FUN_1001cc310();
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      FUN_100694a7c(uVar9);
    }
LAB_100193748:
    (*(code *)PTR__objc_release_10082c7b0)(uVar9);
    FUN_1001782e9(0,0);
  }
  iVar4 = -0x78;
LAB_100193760:
  _objc_autoreleasePoolPop(local_470);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

