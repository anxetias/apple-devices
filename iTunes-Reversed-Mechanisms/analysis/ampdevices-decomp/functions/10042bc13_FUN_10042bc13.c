// name: FUN_10042bc13
// address: 10042bc13

undefined8
FUN_10042bc13(long param_1,undefined4 param_2,long param_3,uint param_4,undefined8 param_5,
             uint param_6)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 local_558;
  undefined1 local_557 [255];
  undefined1 local_458 [2];
  undefined1 local_456 [510];
  undefined2 local_258;
  undefined1 local_256 [510];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  uVar6 = (ulong)param_4;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar5 = 0xff;
  if (param_6 < 0xff) {
    uVar5 = param_6;
  }
  local_258 = (undefined2)uVar5;
  lVar1 = (ulong)param_6 * 2;
  FUN_1001c631b(param_5,local_256,lVar1);
  if (1 < *(byte *)(param_1 + 0xb)) {
    cVar2 = FUN_1001e54d7(&local_258);
    if (cVar2 == '\0') {
      uVar5 = 0xff;
      if (param_4 < 0xff) {
        uVar5 = param_4;
      }
      local_558 = (undefined1)uVar5;
      if (param_4 != 0 && param_3 != 0) {
        FUN_1001c631b(param_3,local_557,uVar6);
      }
      FUN_1001e4f4b(&local_558,local_458);
      uVar5 = param_6 + param_4 + 4;
      lVar4 = FUN_1001c6429((ulong)uVar5 * 2 + 0x1c);
      if (lVar4 == 0) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "tag != nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        uVar3 = 0xffffff94;
      }
      else {
        *(uint *)(lVar4 + 0xc) = uVar5 * 2 + 4;
        *(undefined4 *)(lVar4 + 0x12) = 0x676e6501;
        *(undefined2 *)(lVar4 + 0x16) = 0xfeff;
        FUN_1001c631b(local_456,lVar4 + 0x18,uVar6 * 2);
        *(undefined4 *)(lVar4 + 0x18 + uVar6 * 2) = 0xfeff0000;
        FUN_1001c631b(local_256,lVar4 + 0x1c + uVar6 * 2,lVar1);
        *(undefined2 *)(lVar1 + lVar4 + uVar6 * 2 + 0x1c) = 0;
        *(undefined4 *)(lVar4 + 8) = param_2;
        *(int *)(param_1 + 0xe) =
             *(int *)(param_1 + 0xe) + *(int *)(param_1 + 0x20) + *(int *)(lVar4 + 0xc);
        FUN_1001c2470(param_1 + 0x28,lVar4);
        uVar3 = 0;
      }
      goto LAB_10042bcb8;
    }
  }
  FUN_1001e4c6b(&local_258,&local_558);
  uVar3 = FUN_10042b0c7(param_1,param_2,param_3,uVar6,local_557,local_558);
LAB_10042bcb8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

