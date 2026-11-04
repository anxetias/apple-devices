// name: FUN_100442dce
// address: 100442dce

undefined8 FUN_100442dce(long param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(param_2,0x18);
  if (*(long *)(param_1 + 0x548) != 0) {
    lVar2 = FUN_100166844(*(long *)(param_1 + 0x548),PTR_cf_sinfs_100845a28);
    if (lVar2 != 0) {
      lVar2 = FUN_10016499b(lVar2,0);
      if (lVar2 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "sinfDict != __null";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        uVar3 = FUN_1001669a0(lVar2,PTR_cf_sinf_1008529f8);
        *param_2 = uVar3;
        uVar3 = FUN_1001669a0(lVar2,PTR_cf_sinf2_100852a00);
        param_2[1] = uVar3;
        uVar3 = FUN_1001669a0(lVar2,PTR_cf_pinf_100852a08);
        param_2[2] = uVar3;
      }
    }
    goto LAB_100442f49;
  }
  cVar1 = FUN_100440864(param_1);
  if (cVar1 == '\0') {
    param_2 = param_2 + 2;
    puVar7 = (undefined8 *)0x0;
    pcVar5 = &cf_pinf;
    uVar3 = 0;
    uVar4 = 0x70696e66;
    uVar6 = 0;
LAB_100442f18:
    lVar2 = FUN_100442fb8(param_1,uVar3,pcVar5,uVar4,param_2,uVar6,puVar7);
  }
  else {
    puVar7 = param_2 + 1;
    lVar2 = FUN_100442fb8(param_1,*(undefined8 *)PTR__AVCFMediaTypeVideo_10082b240,&cf_sinf,
                          0x73696e66,param_2,1,puVar7);
    if (lVar2 == 0) {
      FUN_10017060f(*param_2);
      *param_2 = 0;
      FUN_10017060f(param_2[1]);
      param_2[1] = 0;
      uVar3 = *(undefined8 *)PTR__AVCFMediaTypeAudio_10082b228;
      pcVar5 = &cf_sinf;
      uVar4 = 0x73696e66;
      uVar6 = 1;
      goto LAB_100442f18;
    }
  }
  FUN_10017060f(lVar2);
LAB_100442f49:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

