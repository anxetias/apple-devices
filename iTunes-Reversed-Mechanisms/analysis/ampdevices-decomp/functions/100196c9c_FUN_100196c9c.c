// name: FUN_100196c9c
// address: 100196c9c

long FUN_100196c9c(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_100169470(DAT_1008c4d90,param_1);
  if (lVar2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100695fd4(uVar4);
    }
  }
  else {
    local_38 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailFromImageAlways_10082e8c0;
    local_58 = *(undefined8 *)PTR__kCFBooleanTrue_10082e038;
    local_30 = *(undefined8 *)PTR__kCGImageSourceThumbnailMaxPixelSize_10082e8d0;
    local_28 = *(undefined8 *)PTR__kCGImageSourceCreateThumbnailWithTransform_10082e8c8;
    local_50 = lVar2;
    local_48 = local_58;
    lVar3 = FUN_1001713ff(DAT_1008c4d90,&local_38,&local_58,3,
                          PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    if (lVar3 != 0) goto LAB_100196d84;
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_100695f5e(uVar4);
    }
  }
  lVar3 = 0;
  FUN_1001782e9(0,0);
LAB_100196d84:
  FUN_10017060f(lVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

