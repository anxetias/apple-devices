// name: FUN_10027cd3c
// address: 10027cd3c

long * FUN_10027cd3c(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                    undefined1 param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  puVar4 = operator_new(0x160,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_100855e38;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    *(undefined8 *)((long)puVar4 + 0x41) = 0;
    *(undefined8 *)((long)puVar4 + 0x49) = 0;
    puVar4[0xb] = 0x32aaaba7;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[0x16] = 0xffffffffffffffff;
    puVar4[0x17] = 0;
    puVar4[0x18] = 0;
    puVar4[0x19] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1b] = 0xffffffffffffffff;
    puVar4[0x1e] = 0;
    puVar4[0x1f] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x1d] = 0;
    puVar4[0x20] = 0xffffffffffffffff;
    puVar4[0x23] = 0;
    puVar4[0x24] = 0;
    puVar4[0x21] = 0;
    puVar4[0x22] = 0;
    puVar4[0x25] = 0xffffffffffffffff;
    puVar4[0x28] = 0;
    puVar4[0x29] = 0;
    puVar4[0x26] = 0;
    puVar4[0x27] = 0;
    puVar4[0x2a] = 0;
    *(undefined4 *)(puVar4 + 0x2b) = 0x3f800000;
  }
  FUN_1002852f8(param_1,puVar4);
  lVar2 = *param_1;
  if (lVar2 != 0) {
    plVar3 = *(long **)(param_4 + 2);
    local_48 = *param_4;
    uStack_44 = param_4[1];
    uStack_40 = param_4[2];
    uStack_3c = param_4[3];
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    FUN_10027cec0(lVar2,param_2,param_3,&local_48,param_5);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return param_1;
}

