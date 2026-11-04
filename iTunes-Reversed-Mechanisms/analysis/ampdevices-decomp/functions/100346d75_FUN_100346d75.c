// name: FUN_100346d75
// address: 100346d75

/* WARNING: Type propagation algorithm not settling */

void FUN_100346d75(long param_1,byte param_2,char *param_3,uint param_4,long param_5,
                  undefined8 param_6,undefined4 param_7,undefined4 param_8,undefined1 param_9)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  char *local_88;
  uint local_80;
  uint local_7c [2];
  char *local_74;
  undefined2 local_6c;
  char *local_6a;
  undefined2 local_62;
  undefined8 local_60;
  undefined2 local_58;
  uint local_56;
  undefined2 local_52;
  undefined8 local_50;
  undefined2 local_48;
  uint local_46;
  undefined2 local_42;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_a0 = *(undefined8 *)(param_1 + 0x167f0 + (ulong)(param_2 ^ 1) * 8);
  local_90 = param_6;
  local_88 = param_3;
  lVar4 = FUN_100166b7f(local_a0,param_3);
  if (lVar4 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_7c[1] = 0x8220202;
      local_74 = "Assertion failure";
      local_6c = 0x822;
      local_6a = "assetInfoDict != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",local_7c + 1,0x16);
    }
    FUN_1001782e9(0,0);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    pcVar5 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar3 != '\0') {
      local_7c[1] = 0x8420102;
      local_74 = local_88;
      __os_log_impl(0x100000000,pcVar5,0x10,
                    "airtraffic> could not find asset info dictionary for asset key \"%{public}@\"",
                    local_7c + 1,0xc);
    }
  }
  else {
    local_98 = param_5;
    pcVar5 = (char *)FUN_100166c1b(lVar4,&cf_AssetID);
    uVar6 = FUN_100166c1b(lVar4,&cf_Dataclass);
    local_80 = param_4;
    if (1 < param_4 && (param_2 ^ 1) == 0) {
      local_7c[0] = 0;
      lVar4 = FUN_100166b7f(lVar4,&cf_Variant);
      if ((lVar4 != 0) && (cVar3 = FUN_100167740(lVar4,&cf_AssetParts,local_7c), cVar3 != '\0')) {
        if ((local_7c[0] & local_80) == 0) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_7c[1] = 0x8220202;
            local_74 = "Assertion failure";
            local_6c = 0x822;
            local_6a = "(assetParts & assetPart) != 0";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",local_7c + 1,0x16)
            ;
          }
          FUN_1001782e9(0,0);
        }
        local_7c[0] = ~local_80 & local_7c[0];
        if (local_7c[0] != 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          pcVar1 = DAT_1008c75b8;
          cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar3 != '\0') {
            pcVar8 = "FileComplete";
            if (local_98 == 0) {
              pcVar8 = "FileError";
            }
            FUN_10034431c(local_c0,local_80);
            local_88 = pcVar1;
            local_90 = FUN_1001b83ae(local_c0);
            uVar2 = local_7c[0];
            FUN_10034431c(local_b0,local_7c[0]);
            local_40 = FUN_1001b83ae(local_b0);
            local_7c[1] = 0x8220702;
            local_6c = 0x842;
            local_62 = 0x842;
            local_58 = 0x400;
            local_56 = local_80;
            local_52 = 0x822;
            local_50 = local_90;
            local_48 = 0x400;
            local_46 = uVar2;
            local_42 = 0x822;
            local_74 = pcVar8;
            local_6a = pcVar5;
            local_60 = uVar6;
            __os_log_impl(0x100000000,local_88,1,
                          "airtraffic> not yet sending %{public}s for asset identifier \"%{public}@\", dataclass %{public}@ (finished asset part 0x%X (%{public}s), still need asset parts 0x%X (%{public}s))"
                          ,local_7c + 1,0x40);
            FUN_1001b7a50(local_b0);
            FUN_1001b7a50(local_c0);
          }
          FUN_100168746(lVar4,&cf_AssetParts,local_7c[0],0);
          goto LAB_10034708f;
        }
      }
    }
    FUN_10032f806(param_1,pcVar5,uVar6,local_98,local_90,param_7,param_8,param_9);
    FUN_100171552(local_a0,local_88);
  }
LAB_10034708f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

