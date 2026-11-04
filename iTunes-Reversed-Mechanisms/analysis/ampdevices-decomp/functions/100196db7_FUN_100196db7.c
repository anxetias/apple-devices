// name: FUN_100196db7
// address: 100196db7

int FUN_100196db7(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    local_40 = *(undefined8 *)PTR__kCGImageSourceTypeIdentifierHint_10082e8d8;
    local_48 = param_2;
    lVar4 = FUN_1001713ff(DAT_1008c4d90,&local_40,&local_48,1,
                          PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    if (lVar4 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_10069604a(uVar5);
      }
      lVar9 = 0;
      FUN_1001782e9(0,0);
      lVar7 = 0;
      lVar6 = 0;
      local_50 = 0;
      lVar4 = 0;
      iVar10 = 0;
      goto LAB_100196f99;
    }
  }
  local_50 = _CGImageSourceCreateWithData(param_1,lVar4);
  if (local_50 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_100696298(uVar5);
    }
    FUN_1001782e9(0,0);
    iVar10 = 0x2344;
LAB_100196f85:
    lVar8 = 0;
    lVar7 = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_100196c9c(param_3);
    if (lVar6 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_100696222(uVar5);
      }
      FUN_1001782e9(0,0);
      iVar10 = -0x6c;
      goto LAB_100196f85;
    }
    lVar7 = _CGImageSourceCreateThumbnailAtIndex(local_50,0,lVar6);
    if (lVar7 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_1006961ac(uVar5);
      }
      lVar8 = 0;
      FUN_1001782e9(0,0);
      uVar2 = _CGImageSourceGetStatus(local_50);
      iVar3 = FUN_1001968a0(uVar2);
      iVar10 = 0x2345;
      if (iVar3 != 0) {
        iVar10 = iVar3;
      }
      lVar7 = 0;
    }
    else {
      lVar8 = FUN_100170ea9(DAT_1008c4d90,0);
      if (lVar8 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_100696136(uVar5);
        }
        lVar8 = 0;
        FUN_1001782e9(0,0);
        iVar10 = -0x6c;
      }
      else {
        iVar10 = 0;
        lVar9 = _CGImageDestinationCreateWithData(lVar8,param_4,1,0);
        if (lVar9 != 0) {
          _CGImageDestinationAddImage(lVar9,lVar7,0);
          _CGImageDestinationFinalize(lVar9);
          *param_5 = lVar8;
          goto LAB_100196f99;
        }
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_1006960c0(uVar5);
        }
        FUN_1001782e9(0,0);
        iVar10 = 0x2346;
      }
    }
  }
  FUN_10017060f(lVar8);
  lVar9 = 0;
LAB_100196f99:
  FUN_10017060f(lVar9);
  FUN_10017060f(lVar7);
  FUN_10017060f(lVar6);
  FUN_10017060f(local_50);
  FUN_10017060f(lVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar10;
}

