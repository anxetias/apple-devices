// name: FUN_1005442d0
// address: 1005442d0

bool FUN_1005442d0(undefined4 param_1,long param_2,undefined1 *param_3)

{
  short sVar1;
  undefined8 uVar2;
  long lVar3;
  long local_220;
  undefined1 local_218 [4];
  undefined4 local_214;
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [32];
  undefined1 local_190 [16];
  undefined1 local_180;
  undefined4 local_17e;
  undefined1 local_178 [96];
  undefined1 local_118 [160];
  undefined1 local_78;
  undefined **local_58;
  code *local_50;
  undefined8 local_48;
  long *local_40;
  undefined ***local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10044eef2(local_218);
  local_220 = param_2;
  uVar2 = FUN_100416f20(param_1,0x10cc01b0);
  FUN_1001b81f2(local_1f0,uVar2);
  FUN_1001c334a(&local_58,0x10cf005d);
  FUN_1001b80b2(local_1e0,&local_58);
  FUN_1001b7a50(&local_58);
  local_214 = 8;
  FUN_1001c334a(&local_58,0x5db30003);
  FUN_1001b80b2(local_1d0,&local_58);
  FUN_1001b7a50(&local_58);
  FUN_1001c334a(&local_58,0x5db3001c);
  FUN_1001b80b2(local_1c0,&local_58);
  FUN_1001b7a50(&local_58);
  local_17e = 0x20001;
  FUN_1001b82d4(local_178,"itns32504",9);
  if (param_2 != 0) {
    FUN_1001c334a(&local_58,0x10cf0020);
    FUN_1001b80b2(local_1b0,&local_58);
    FUN_1001b7a50(&local_58);
    local_50 = FUN_100544516;
    local_48 = 0;
    local_40 = &local_220;
    local_58 = &PTR_FUN_100869f98;
    local_38 = &local_58;
    FUN_1002186ec(&local_58,local_118);
    if (local_38 == &local_58) {
      lVar3 = 0x20;
    }
    else {
      lVar3 = 0x28;
      if (local_38 == (undefined ***)0x0) goto LAB_100544452;
    }
    (**(code **)((long)*local_38 + lVar3))();
  }
LAB_100544452:
  if (param_3 != (undefined1 *)0x0) {
    FUN_1001c334a(&local_58,0x5db30013);
    FUN_1001b80b2(local_190,&local_58);
    FUN_1001b7a50(&local_58);
    local_180 = 1;
  }
  sVar1 = FUN_10044f1a0(local_218);
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = local_78;
  }
  FUN_10020dfaa(local_218);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return sVar1 == 1;
}

