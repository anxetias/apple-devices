// name: FUN_1002d48ee
// address: 1002d48ee

void FUN_1002d48ee(undefined8 param_1,undefined4 param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ushort local_9c;
  ushort local_9a;
  undefined **local_98;
  code *local_90;
  long local_88;
  undefined ***local_78;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined4 uStack_59;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = _IOIteratorNext(param_2);
  if (iVar2 != 0) {
    do {
      iVar3 = FUN_1001c48f5(iVar2,&local_9c,&local_9a);
      if (iVar3 == 0) {
        if (local_9c == 0x66f) {
          if ((local_9a == 0x3500) || (local_9a == 0x3410)) goto LAB_1002d49ab;
        }
        else if ((local_9c == 0x5ac) &&
                ((local_9a - 0x1220 < 0x31 &&
                 ((0x107ef001e003bU >> ((ulong)(local_9a - 0x1220) & 0x3f) & 1) != 0)))) {
LAB_1002d49ab:
          local_88 = ((ulong)local_9c << 0x20) + ((ulong)local_9a << 0x30) + 0x69506f64;
          local_98 = &PTR_FUN_1008525b0;
          local_90 = FUN_100268414;
          local_68 = 0;
          uStack_60 = 0;
          uStack_59 = 0;
          local_50 = 0;
          uStack_48 = 0;
          local_40 = (long *)0x0;
          local_78 = &local_98;
          FUN_10017869a(&local_98);
          if (local_40 != (long *)0x0) {
            LOCK();
            plVar1 = local_40 + 1;
            lVar4 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar4 == 0) {
              (**(code **)(*local_40 + 0x10))(local_40);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (local_78 == &local_98) {
            lVar4 = 0x20;
          }
          else {
            lVar4 = 0x28;
            if (local_78 == (undefined ***)0x0) goto LAB_1002d4a6e;
          }
          (**(code **)((long)*local_78 + lVar4))();
        }
      }
LAB_1002d4a6e:
      _IOObjectRelease(iVar2);
      iVar2 = _IOIteratorNext(param_2);
    } while (iVar2 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

