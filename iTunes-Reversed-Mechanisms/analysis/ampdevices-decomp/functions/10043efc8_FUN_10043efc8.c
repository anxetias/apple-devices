// name: FUN_10043efc8
// address: 10043efc8

long FUN_10043efc8(void)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)PTR__AVCFURLAssetShouldPrepareToOptimizeForExclusivePlaybackKey_10082b4a0;
  lVar3 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                        PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  if (lVar1 == 0) {
    if (lVar3 == 0) goto LAB_10043f051;
  }
  else {
    if (lVar3 == 0) {
LAB_10043f051:
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "optionsDict != __null";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      lVar3 = 0;
      FUN_1001782e9(0,0);
      goto LAB_10043f075;
    }
    FUN_100171502(lVar3,lVar1,*(undefined8 *)PTR__kCFBooleanTrue_10082e038);
  }
  FUN_100168b0b(lVar3,*(undefined8 *)
                       PTR__AVCFURLAssetInheritURIQueryComponentFromReferencingURIKey_10082b490,1,1)
  ;
LAB_10043f075:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

