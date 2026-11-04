// name: FUN_100178bf5
// address: 100178bf5

ulong FUN_100178bf5(ulong param_1,undefined1 *param_2)

{
  long *plVar1;
  double dVar2;
  long lVar3;
  dispatch_object_t source;
  undefined1 *puVar4;
  dispatch_time_t start;
  long *plVar5;
  ulong uVar6;
  size_t sVar7;
  double dVar8;
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  undefined1 *local_60;
  long local_58;
  long *plStack_50;
  double local_48;
  undefined8 uStack_40;
  long local_38;
  
  uVar6 = 0;
  if ((param_1 & 0xe) != 0 || DAT_100890028 == 0) {
    DAT_100890028 = DAT_100890028 + 1;
    FUN_1001785f7();
    FUN_10015a0ac(local_78,&DAT_100890050);
    FUN_1001785f7();
    plVar5 = DAT_100890030;
    if ((param_1 & 8) != 0) {
      FUN_1001785f7();
      DAT_100890048 = 1;
      if (DAT_100890020._os_obj != (_os_object_s *)0x0) {
        _dispatch_source_cancel((dispatch_source_t)DAT_100890020._os_obj);
        DAT_100890020._os_obj = (_os_object_s *)0x0;
        DAT_1008900a8 = 0.0;
      }
    }
    local_48 = 0.0;
    uStack_40 = 0;
    local_60 = param_2;
    while (FUN_1001785f7(), puVar4 = local_60, source = DAT_100890020, plVar5 != DAT_100890038) {
      local_38 = *plVar5;
      dVar8 = (double)FUN_1001ebd46();
      if ((param_1 & 8) == 0) {
        if ((((param_1 & 1) == 0) || (*(char *)(local_38 + 0x40) == '\x01')) &&
           (((param_1 & 2) == 0 || (*(char *)(local_38 + 0x41) == '\x01')))) {
          dVar2 = *(double *)(local_38 + 0x38);
          if ((((dVar2 == DAT_100701af0) && (!NAN(dVar2) && !NAN(DAT_100701af0))) ||
              (dVar2 <= dVar8)) &&
             (((param_1 & 0x10) == 0 || (*(char *)(local_38 + 0x42) == '\x01'))))
          goto LAB_100178d4f;
        }
        dVar2 = *(double *)(local_38 + 0x38);
        if ((dVar2 != DAT_100701af0) || (NAN(dVar2) || NAN(DAT_100701af0))) {
          if (dVar2 <= dVar8) {
            *(undefined8 *)(local_38 + 0x38) = 0;
          }
          else {
            dVar8 = dVar2;
            if (local_48 <= dVar2) {
              dVar8 = local_48;
            }
            local_48 = (double)(-(ulong)(local_48 == DAT_100701af0) & (ulong)dVar2 |
                               ~-(ulong)(local_48 == DAT_100701af0) & (ulong)dVar8);
            uStack_40 = 0;
          }
        }
        plVar5 = plVar5 + 1;
      }
      else {
LAB_100178d4f:
        FUN_1001785f7();
        sVar7 = (long)DAT_100890038 - (long)(plVar5 + 1);
        if (sVar7 != 0) {
          _memmove(plVar5,plVar5 + 1,sVar7);
        }
        lVar3 = local_38;
        DAT_100890038 = (long *)((long)plVar5 + sVar7);
        local_58 = 0;
        plStack_50 = (long *)0x0;
        if (*(char *)(local_38 + 0x50) == '\x01') {
          if ((*(long *)(local_38 + 0x60) == 0) ||
             (plStack_50 = (long *)std::__shared_weak_count::lock(), plStack_50 == (long *)0x0)) {
            local_58 = 0;
            plStack_50 = (long *)0x0;
          }
          else {
            local_58 = *(long *)(lVar3 + 0x58);
          }
          if ((*(byte *)(local_38 + 0x50) & local_58 == 0) == 0) goto LAB_100178dc8;
        }
        else {
LAB_100178dc8:
          plVar5 = plStack_50;
          FUN_100395b14(local_68,local_78);
          if (*(long **)(local_38 + 0x20) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_10016bf14();
          }
          (**(code **)(**(long **)(local_38 + 0x20) + 0x30))();
          lVar3 = local_38;
          local_38 = 0;
          if (lVar3 != 0) {
            FUN_100179314(&local_38);
          }
          local_58 = 0;
          plStack_50 = (long *)0x0;
          if (plVar5 != (long *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            lVar3 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar3 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              std::__shared_weak_count::__release_weak();
            }
          }
          FUN_100179644();
        }
        FUN_1001785f7();
        plVar5 = DAT_100890030;
        if (plStack_50 != (long *)0x0) {
          LOCK();
          plVar1 = plStack_50 + 1;
          lVar3 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar3 == 0) {
            (**(code **)(*plStack_50 + 0x10))(plStack_50);
            std::__shared_weak_count::__release_weak();
          }
        }
        lVar3 = local_38;
        local_38 = 0;
        if (lVar3 != 0) {
          FUN_100179314();
        }
      }
    }
    if (((0.0 < local_48) && (DAT_100890000 == 0)) &&
       (((DAT_1008900a8 == 0.0 && (!NAN(DAT_1008900a8))) ||
        ((0.0 < DAT_1008900a8 && (local_48 < DAT_1008900a8)))))) {
      DAT_1008900a8 = local_48;
      dVar8 = (double)FUN_1001ebd46();
      start = _dispatch_walltime((timespec *)0x0,(long)((local_48 - dVar8) * DAT_10070e4d8));
      _dispatch_source_set_timer
                ((dispatch_source_t)source._os_obj,start,0xffffffffffffffff,1000000000);
      _dispatch_resume(DAT_100890020);
    }
    FUN_1001785f7();
    uVar6 = (ulong)((long)DAT_100890038 - (long)DAT_100890030) >> 3;
    FUN_10015a142(local_78);
    DAT_100890028 = DAT_100890028 + -1;
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = 1;
    }
  }
  return uVar6 & 0xffffffff;
}

