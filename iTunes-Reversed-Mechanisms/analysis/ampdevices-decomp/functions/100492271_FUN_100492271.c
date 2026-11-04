// name: FUN_100492271
// address: 100492271

void FUN_100492271(long param_1,long param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_68;
  undefined8 uStack_64;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar3 = operator_new(0x90,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar3 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_68 = 0x8220202;
      uStack_64 = "Assertion failure";
      uStack_5c = 0x822;
      uStack_5a = 0x2b02;
      uStack_58 = 0x1007d;
      uStack_54 = 0;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined8 *)((long)puVar3 + 0x3c) = 0;
    *(undefined8 *)((long)puVar3 + 0x44) = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    FUN_1001b7a44();
    *(undefined8 *)((long)puVar3 + 0x65) = 0;
    puVar3[0xc] = 0;
    *(undefined1 *)((long)puVar3 + 0x6e) = 0;
    *(undefined2 *)(puVar3 + 0xe) = 0;
    *(undefined1 *)((long)puVar3 + 0x72) = 0;
    *(undefined8 *)((long)puVar3 + 0x74) = 0;
    *(undefined8 *)((long)puVar3 + 0x7c) = 0;
    *(undefined8 *)((long)puVar3 + 0x84) = 0;
    FUN_1001c23b3();
    puVar3[3] = param_2;
    *(undefined1 *)((long)puVar3 + 0x6e) = 0;
    FUN_100486d8f(&local_68,param_2);
    FUN_1001b80b2(puVar3 + 10,&local_68);
    FUN_1001b7a50(&local_68);
    if (param_3 == 0) {
      param_3 = param_1 + 8;
    }
    else {
      puVar3[1] = param_3;
      *(short *)(puVar3 + 0xe) = (short)*(undefined4 *)(param_3 + 0x70) + 1;
      param_3 = param_3 + 0x10;
    }
    FUN_100490b9c(&local_68,param_2);
    *(undefined4 *)((long)puVar3 + 0x3c) = uStack_4c;
    *(undefined4 *)(puVar3 + 8) = uStack_48;
    *(undefined4 *)((long)puVar3 + 0x44) = uStack_44;
    *(undefined4 *)(puVar3 + 9) = uStack_40;
    *(undefined4 *)(puVar3 + 6) = uStack_58;
    *(uint *)((long)puVar3 + 0x34) = CONCAT22(uStack_52,uStack_54);
    *(undefined4 *)(puVar3 + 7) = uStack_50;
    *(undefined4 *)((long)puVar3 + 0x3c) = uStack_4c;
    *(undefined4 *)(puVar3 + 4) = local_68;
    *(undefined4 *)((long)puVar3 + 0x24) = (undefined4)uStack_64;
    *(undefined4 *)(puVar3 + 5) = uStack_64._4_4_;
    *(uint *)((long)puVar3 + 0x2c) = CONCAT22(uStack_5a,uStack_5c);
    FUN_10048256b(param_2,puVar3 + 0xc);
    if (*(short *)(param_2 + 0x10) == 0x23) {
      *(undefined1 *)((long)puVar3 + 0x72) = 1;
    }
    if (*(code **)(param_1 + 0x10) != (code *)0x0) {
      iVar2 = (**(code **)(param_1 + 0x10))(puVar3,*(undefined8 *)(param_1 + 0x20));
      if (iVar2 != 99) {
        FUN_1001b7a50(puVar3 + 10);
        operator_delete(puVar3);
        goto LAB_100492432;
      }
    }
    FUN_1001c23fc(param_3,puVar3);
    lVar5 = *(long *)(param_2 + 0x48);
    if (lVar5 != 0) {
      do {
        FUN_100492271(param_1,lVar5,puVar3);
        lVar5 = *(long *)(lVar5 + 0x30);
      } while (lVar5 != 0);
      FUN_1001c28ba(puVar3 + 2,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),0);
    }
  }
LAB_100492432:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

