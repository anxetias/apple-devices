// name: FUN_100424320
// address: 100424320

/* WARNING: Type propagation algorithm not settling */

void FUN_100424320(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [20];
  uint local_5c [2];
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_80);
  FUN_1001b7a44(local_70);
  *param_4 = 1;
  if (((*(int *)(param_1 + 0x548) != 0) || (lVar3 = FUN_100249f90(param_1 + 0x5b0), lVar3 != 0)) ||
     (*(char *)(param_1 + 0x5d) == '\x01')) {
    if (*(char *)(param_1 + 0x135a) == '\x01') {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_5c[1] = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "0";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
      }
      FUN_1001782e9(0,0);
      uVar4 = FUN_100416f20(*(undefined4 *)(param_1 + 0x58),0x10cc012c);
      FUN_1001b81f2(local_80,uVar4);
      FUN_1001c334a(local_5c + 1,0x10cf000d);
      FUN_1001b80b2(local_70,local_5c + 1);
    }
    else {
      lVar3 = FUN_100249f90(param_1 + 0x5b0);
      lVar5 = 0x5c0;
      if ((lVar3 == 0) && (lVar5 = 0x650, *(int *)(param_1 + 0x548) == 3)) {
        lVar5 = 0x570;
      }
      uVar4 = FUN_100416f20(*(undefined4 *)(param_1 + 0x58),0x10cc00d0);
      FUN_1001b7eb0(local_a0,uVar4);
      FUN_10024a49a(local_90,lVar5 + param_1);
      FUN_1001bbec4(local_5c + 1,local_a0,local_90);
      FUN_1001b80b2(local_80,local_5c + 1);
      FUN_1001b7a50(local_5c + 1);
      FUN_1001b7a50(local_90);
      FUN_1001b7a50(local_a0);
      FUN_1001c334a(local_5c + 1,0x10cf000d);
      FUN_1001b80b2(local_70,local_5c + 1);
    }
    FUN_1001b7a50(local_5c + 1);
    *param_4 = 0;
  }
  cVar2 = FUN_1001b8428(local_80);
  if (cVar2 == '\0') goto LAB_100424554;
  iVar6 = *(int *)(param_1 + 0x58);
  if (iVar6 < 0x4d616320) {
    if ((iVar6 != 0x48416363) && (iVar6 != 0x48506f64)) goto LAB_1004245a1;
LAB_100424512:
    uVar4 = FUN_100416f20(iVar6,0x10cc00d3);
    FUN_1001b81f2(local_70,uVar4);
  }
  else if ((iVar6 == 0x4d616320) || (iVar6 == 0x69427269)) {
    uVar4 = FUN_100416f20(iVar6,0x10cc00da);
    FUN_1001b81f2(local_70,uVar4);
    FUN_1001b81f2(local_80,&cf_space_s_);
  }
  else {
    if (iVar6 == 0x57617463) goto LAB_100424512;
LAB_1004245a1:
    if (*(char *)(param_1 + 0x135a) != '\x01') {
      cVar2 = FUN_100209915();
      if (cVar2 == '\0') {
        uVar4 = FUN_100416f20(*(undefined4 *)(param_1 + 0x58),0x10cc00dd);
        FUN_1001b81f2(local_80,uVar4);
        FUN_1001c334a(local_5c + 1,0x10cf0012);
        FUN_1001b80b2(local_70,local_5c + 1);
      }
      else {
        FUN_100177cff(local_5c);
        lVar3 = FUN_100279568();
        uVar1 = local_5c[0];
        if ((*(int *)(lVar3 + 0x332) == 0) ||
           (lVar3 = FUN_100279568(), *(int *)(lVar3 + 0x332) + 0x93a80U < uVar1)) {
          iVar6 = local_5c[0] + 0x15180;
        }
        else {
          lVar3 = FUN_100279568();
          iVar6 = *(int *)(lVar3 + 0x332) + 0x93a80;
        }
        uVar4 = FUN_100416f20(*(undefined4 *)(param_1 + 0x58),0x10cc00de);
        FUN_1001b7eb0(local_a0,uVar4);
        FUN_1001e2489(local_90,iVar6,3);
        FUN_1001bbec4(local_5c + 1,local_a0,local_90);
        FUN_1001b80b2(local_80,local_5c + 1);
        FUN_1001b7a50(local_5c + 1);
        FUN_1001b7a50(local_90);
        FUN_1001b7a50(local_a0);
        FUN_1001c334a(local_5c + 1,0x10cf0012);
        FUN_1001b80b2(local_70,local_5c + 1);
      }
      FUN_1001b7a50(local_5c + 1);
      goto LAB_100424554;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_5c[1] = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "0";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = FUN_100416f20(*(undefined4 *)(param_1 + 0x58),0x10cc012c);
    FUN_1001b81f2(local_80,uVar4);
    FUN_1001c334a(local_5c + 1,0x10cf000d);
    FUN_1001b80b2(local_70,local_5c + 1);
    FUN_1001b7a50(local_5c + 1);
  }
  *param_4 = 0;
LAB_100424554:
  FUN_1001b8172(param_2,local_80);
  FUN_1001b8172(param_3,local_70);
  FUN_1001b7a50(local_70);
  FUN_1001b7a50(local_80);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

