// name: FUN_1005000d5
// address: 1005000d5

long FUN_1005000d5(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = FUN_1001c629e(0x16a00,&DAT_100711c6e);
  if (lVar5 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined8 *)(lVar5 + 0x6700) = 0;
    *(undefined8 *)(lVar5 + 0x6708) = 0;
    *(undefined8 *)(lVar5 + 0x6730) = 0;
    *(undefined8 *)(lVar5 + 0x6738) = 0;
    *(undefined4 *)(lVar5 + 0x6760) = 0;
    *(undefined8 *)(lVar5 + 0x6768) = 0;
    *(undefined8 *)(lVar5 + 0x6770) = 0;
    *(undefined8 *)(lVar5 + 0x6778) = 0;
    *(undefined8 *)(lVar5 + 0x6780) = 0;
    *(undefined8 *)(lVar5 + 0x6788) = 0;
    *(undefined8 *)(lVar5 + 0x6790) = 0;
    *(undefined8 *)(lVar5 + 0x6798) = 0;
    *(undefined8 *)(lVar5 + 0x67a0) = 0;
    *(undefined4 *)(lVar5 + 0x14c68) = 0;
    *(undefined8 *)(lVar5 + 0x14c70) = 0;
    *(undefined8 *)(lVar5 + 0x14c78) = 0;
    *(undefined8 *)(lVar5 + 0x14c80) = 0;
    *(undefined8 *)(lVar5 + 0x14c88) = 0;
    *(undefined8 *)(lVar5 + 0x14c90) = 0;
    *(undefined8 *)(lVar5 + 0x14c98) = 0;
    *(undefined8 *)(lVar5 + 0x14ca0) = 0;
    *(undefined8 *)(lVar5 + 0x14ca8) = 0;
    *(undefined4 *)(lVar5 + 0x15230) = 0;
    *(undefined4 *)(lVar5 + 0x15238) = 0;
    *(undefined8 *)(lVar5 + 0x15240) = 0;
    *(undefined8 *)(lVar5 + 0x15248) = 0;
    *(undefined8 *)(lVar5 + 0x15250) = 0;
    *(undefined8 *)(lVar5 + 0x15258) = 0;
    *(undefined8 *)(lVar5 + 0x15260) = 0;
    *(undefined8 *)(lVar5 + 0x15268) = 0;
    *(undefined8 *)(lVar5 + 0x15270) = 0;
    *(undefined8 *)(lVar5 + 0x15278) = 0;
    *(undefined8 *)(lVar5 + 0x15280) = 0;
    *(undefined8 *)(lVar5 + 0x15288) = 0;
    *(undefined8 *)(lVar5 + 0x15290) = 0;
    *(undefined8 *)(lVar5 + 0x15298) = 0;
    *(undefined8 *)(lVar5 + 0x152a0) = 0;
    *(undefined8 *)(lVar5 + 0x152a8) = 0;
    *(undefined4 *)(lVar5 + 0x152b0) = 0;
    *(undefined4 *)(lVar5 + 0x152b4) = 0;
    *(undefined4 *)(lVar5 + 0x152b8) = 0;
    *(undefined1 *)(lVar5 + 0x152bc) = 0;
    *(undefined8 *)(lVar5 + 0x15400) = 0;
    *(undefined8 *)(lVar5 + 0x15408) = 0;
    *(long *)(lVar5 + 0x153f8) = lVar5 + 0x15400;
    *(undefined8 *)(lVar5 + 0x15418) = 0;
    *(undefined8 *)(lVar5 + 0x15420) = 0;
    *(long *)(lVar5 + 0x15410) = lVar5 + 0x15418;
    *(undefined8 *)(lVar5 + 0x157d0) = 0;
    *(undefined8 *)(lVar5 + 0x157d8) = 0;
    *(long *)(lVar5 + 0x15988) = lVar5 + 0x15988;
    *(long *)(lVar5 + 0x15990) = lVar5 + 0x15988;
    *(undefined8 *)(lVar5 + 0x15998) = 0;
    *(long *)(lVar5 + 0x159a8) = lVar5 + 0x159a8;
    *(long *)(lVar5 + 0x159b0) = lVar5 + 0x159a8;
    *(undefined8 *)(lVar5 + 0x159b8) = 0;
    *(undefined8 *)(lVar5 + 0x16658) = 0;
    *(undefined8 *)(lVar5 + 0x16660) = 0;
    *(undefined8 *)(lVar5 + 0x166a0) = 0;
    *(undefined8 *)(lVar5 + 0x166a8) = 0;
    *(undefined4 *)(lVar5 + 0x16878) = 0;
    *(undefined8 *)(lVar5 + 0x168b0) = 0;
    *(undefined8 *)(lVar5 + 0x168b8) = 0;
    *(undefined8 *)(lVar5 + 0x168a0) = 0;
    *(undefined8 *)(lVar5 + 0x168a8) = 0;
    *(undefined8 *)(lVar5 + 0x16890) = 0;
    *(undefined8 *)(lVar5 + 0x16898) = 0;
    *(undefined8 *)(lVar5 + 0x16880) = 0;
    *(undefined8 *)(lVar5 + 0x16888) = 0;
    *(undefined4 *)(lVar5 + 8) = 0x64756c63;
    *(long *)(lVar5 + 0x20) = param_1;
    uVar3 = FUN_1001ea5dc();
    *(undefined4 *)(lVar5 + 0x28) = uVar3;
    *(undefined4 *)(lVar5 + 0x2c) = 1;
    uVar6 = FUN_10026394e(param_2);
    *(undefined8 *)(lVar5 + 0x66d8) = uVar6;
    *(undefined8 *)(lVar5 + 0x14cb0) = 0;
    *(undefined8 *)(lVar5 + 0x14cc0) = 0;
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    *(undefined8 **)(lVar5 + 0x152f0) = puVar7;
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    *(undefined8 **)(lVar5 + 0x152f8) = puVar7;
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    *(undefined8 **)(lVar5 + 0x15300) = puVar7;
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    *(undefined8 **)(lVar5 + 0x15308) = puVar7;
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    *(undefined8 **)(lVar5 + 0x15310) = puVar7;
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    *(undefined8 **)(lVar5 + 0x15318) = puVar7;
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    *(undefined8 **)(lVar5 + 0x15320) = puVar7;
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    *(undefined8 **)(lVar5 + 0x15328) = puVar7;
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    *(undefined8 **)(lVar5 + 0x15330) = puVar7;
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    *(undefined8 **)(lVar5 + 0x15338) = puVar7;
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    *(undefined8 **)(lVar5 + 0x15340) = puVar7;
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    *(undefined8 **)(lVar5 + 0x15348) = puVar7;
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    *(undefined8 **)(lVar5 + 0x15350) = puVar7;
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    *(undefined8 **)(lVar5 + 0x15358) = puVar7;
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    *(undefined8 **)(lVar5 + 0x15360) = puVar7;
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    *(undefined8 **)(lVar5 + 0x15368) = puVar7;
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    *(undefined8 **)(lVar5 + 0x15370) = puVar7;
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    *(undefined8 **)(lVar5 + 0x15378) = puVar7;
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    *(undefined8 **)(lVar5 + 0x15380) = puVar7;
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    *(undefined8 **)(lVar5 + 0x15388) = puVar7;
    puVar7 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    *(undefined8 **)(lVar5 + 0x15390) = puVar7;
    *(undefined8 *)(lVar5 + 0x38) = param_3;
    uVar1 = FUN_100266e14(param_2);
    *(undefined1 *)(lVar5 + 0x6adc) = uVar1;
    *(undefined4 *)(lVar5 + 0x7e20) = 0x32;
    uVar3 = FUN_100266214(param_2);
    *(undefined4 *)(lVar5 + 0x66b0) = uVar3;
    lVar8 = FUN_1001c629e(0x4d0,&DAT_100711c6e);
    if (lVar8 != 0) {
      FUN_10022c186(lVar8);
    }
    *(long *)(lVar5 + 0x151a0) = lVar8;
    uVar6 = FUN_100170ea9(0,0);
    *(undefined8 *)(lVar5 + 0x151a8) = uVar6;
    uVar6 = FUN_100170ea9(0,0);
    *(undefined8 *)(lVar5 + 0x151b0) = uVar6;
    uVar6 = FUN_100170ea9(0,0);
    *(undefined8 *)(lVar5 + 0x151b8) = uVar6;
    uVar6 = FUN_100170ea9(0,0);
    *(undefined8 *)(lVar5 + 0x151c0) = uVar6;
    uVar6 = FUN_100170ea9(0,0);
    *(undefined8 *)(lVar5 + 0x151c8) = uVar6;
    puVar7 = operator_new(0x220,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar7 == (undefined8 *)0x0) {
      *(undefined8 *)(lVar5 + 0x157e8) = 0;
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_4a = "handlerData->dragSyncExceptions != nullptr";
LAB_100500a46:
        local_4c = 0x822;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
LAB_100500888:
      FUN_1001782e9(0,0);
    }
    else {
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined1 *)(puVar7 + 6) = 0;
      *(undefined8 *)((long)puVar7 + 0x34) = 0;
      *(undefined8 *)((long)puVar7 + 0x3c) = 0;
      *(undefined8 *)((long)puVar7 + 0x44) = 0;
      *(undefined8 *)((long)puVar7 + 0x4c) = 0;
      ___bzero(puVar7 + 0xb,0x1c8);
      *(undefined8 **)(lVar5 + 0x157e8) = puVar7;
      puVar7 = operator_new(0x220,(nothrow_t *)PTR_nothrow_10082c970);
      if (puVar7 == (undefined8 *)0x0) {
        *(undefined8 *)(lVar5 + 0x157f0) = 0;
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_4a = "handlerData->copySyncExceptions != nullptr";
          goto LAB_100500a46;
        }
        goto LAB_100500888;
      }
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined1 *)(puVar7 + 6) = 0;
      *(undefined8 *)((long)puVar7 + 0x34) = 0;
      *(undefined8 *)((long)puVar7 + 0x3c) = 0;
      *(undefined8 *)((long)puVar7 + 0x44) = 0;
      *(undefined8 *)((long)puVar7 + 0x4c) = 0;
      ___bzero(puVar7 + 0xb,0x1c8);
      *(undefined8 **)(lVar5 + 0x157f0) = puVar7;
      iVar4 = FUN_1001c703f(lVar5 + 0x66f0,FUN_100509123,lVar5);
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          iVar4 = FUN_1001e9c3e(lVar5 + 0x6760);
          if (iVar4 == -0x80) goto LAB_100500891;
          if (iVar4 == 0) {
            iVar4 = FUN_1001e9c3e(lVar5 + 0x14c68);
            if (iVar4 == -0x80) goto LAB_100500891;
            if (iVar4 == 0) {
              FUN_10050bed1(param_1 + 0x10,lVar5);
              goto LAB_1005008a3;
            }
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
              goto LAB_100500a01;
            }
          }
          else {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
              goto LAB_100500a01;
            }
          }
        }
        else {
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
LAB_100500a01:
            local_4c = 0x400;
            local_54 = "Assertion failure";
            local_58 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
        if (iVar4 == 0) goto LAB_1005008a3;
      }
    }
LAB_100500891:
    FUN_1004e3ed9(lVar5);
    FUN_1004e1e68(lVar5);
  }
  lVar5 = 0;
LAB_1005008a3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar5;
}

