// name: FUN_100258d18
// address: 100258d18

bool FUN_100258d18(undefined8 param_1,int param_2,int *param_3,uint param_4,char param_5)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  int local_228 [2];
  undefined8 local_220;
  undefined1 local_218 [8];
  undefined1 local_210 [32];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [66];
  undefined4 local_17e;
  undefined4 local_138;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_248);
  FUN_1001b7a44(local_238);
  FUN_10044eef2(local_218);
  uVar4 = FUN_100416f20(param_2,(param_4 & 0xff) + 0x10cc00e8);
  FUN_1001b81f2(local_248,uVar4);
  if (param_2 == 0x69545620) {
    local_228[0] = 0x73766d64;
    local_220 = FUN_1001705fc(&cf_4_2);
    if ((local_228[0] == 0x73766d64 && *param_3 == 0x73766970) ||
       (local_228[0] == 0x73766970 && *param_3 == 0x73766d64)) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = 
        "(((left.mKind == kSoftwareVersionKindIPod) && (right.mKind == kSoftwareVersionKindMobileDevice)) || ((left.mKind == kSoftwareVersionKindMobileDevice) && (right.mKind == kSoftwareVersionKindIPod))) == false"
        ;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      FUN_100249fee(local_228);
    }
    else {
      iVar3 = FUN_10024a918(param_3,local_228);
      FUN_100249fee(local_228);
      if (iVar3 < 0) {
        FUN_1001b82d4(local_238,"4.0",3);
        goto LAB_100258e80;
      }
    }
  }
  FUN_10024a49a(&local_58,param_3);
  FUN_1001b80b2(local_238,&local_58);
  FUN_1001b7a50(&local_58);
LAB_100258e80:
  FUN_1001bbec4(&local_58,local_248,local_238);
  FUN_1001b80b2(local_1f0,&local_58);
  FUN_1001b7a50(&local_58);
  if (param_5 != '\0') {
    FUN_1001b8172(local_1e0,local_1f0);
    uVar4 = FUN_100416f20(param_2,0x10cc013a);
    FUN_1001b81f2(local_1f0,uVar4);
    local_138 = 3;
  }
  FUN_1001b8172(local_210,param_1);
  FUN_1001c334a(&local_58,(param_4 & 0xff) * 4 + 0x10cf000d);
  FUN_1001b80b2(local_1d0,&local_58);
  FUN_1001b7a50(&local_58);
  FUN_1001c334a(&local_58,0x5db30004);
  FUN_1001b80b2(local_1c0,&local_58);
  FUN_1001b7a50(&local_58);
  local_17e = 0x20001;
  sVar2 = FUN_10044f1a0();
  FUN_10020dfaa(local_218);
  FUN_1001b7a50(local_238);
  FUN_1001b7a50(local_248);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return sVar2 == 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

