// name: FUN_10031a50b
// address: 10031a50b

void FUN_10031a50b(void)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined2 local_60;
  long local_5e;
  undefined2 local_56;
  long local_54;
  undefined2 local_4c;
  uint local_4a;
  undefined2 local_46;
  undefined8 local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = FUN_100306d78();
  if (lVar4 != 0) {
    do {
      lVar5 = FUN_100306e32(lVar4);
      if ((*(int *)(lVar4 + 0x84) != 0x706d6574) && ((*(ulong *)(lVar4 + 0x1bb0) & 0x60000000) == 0)
         ) {
        *(ulong *)(lVar4 + 0x1bb0) = *(ulong *)(lVar4 + 0x1bb0) & 0xffffffff1fffffff | 0x40000000;
        FUN_1002fc1ae(lVar4,0x74646964,0);
        uVar1 = *(ulong *)(lVar4 + 0x1bb0);
        *(ulong *)(lVar4 + 0x1bb0) = uVar1 & 0xffffffffbfffffff;
        if ((*(int *)(lVar4 + 0x94) == 0) && ((uVar1 & 0x10) != 0)) {
          if (DAT_1008c66e8 != -1) {
            _dispatch_once(&DAT_1008c66e8,&PTR___NSConcreteGlobalBlock_100853840);
          }
          uVar2 = DAT_1008c66e0;
          cVar3 = _os_log_type_enabled(DAT_1008c66e0,0x10);
          if (cVar3 != '\0') {
            FUN_1001b7a44(local_78);
            FUN_1001b7b04(local_88,"( ");
            FUN_1001bbcfe(local_78,local_88);
            FUN_1001b7a50(local_88);
            FUN_1001b7b04(local_88,"TF ");
            FUN_1001bbcfe(local_78,local_88);
            FUN_1001b7a50(local_88);
            if ((uVar1 & 0x20) != 0) {
              FUN_1001b7b04(local_88,"T# ");
              FUN_1001bbcfe(local_78,local_88);
              FUN_1001b7a50(local_88);
            }
            if ((uVar1 & 0x40) != 0) {
              FUN_1001b7b04(local_88,"IF ");
              FUN_1001bbcfe(local_78,local_88);
              FUN_1001b7a50(local_88);
            }
            if ((char)uVar1 < '\0') {
              FUN_1001b7b04(local_88,"I# ");
              FUN_1001bbcfe(local_78,local_88);
              FUN_1001b7a50(local_88);
            }
            uVar8 = (uint)uVar1;
            if ((uVar8 >> 8 & 1) != 0) {
              FUN_1001b7b04(local_88,"PF ");
              FUN_1001bbcfe(local_78,local_88);
              FUN_1001b7a50(local_88);
            }
            if ((uVar8 >> 9 & 1) != 0) {
              FUN_1001b7b04(local_88,"P# ");
              FUN_1001bbcfe(local_78,local_88);
              FUN_1001b7a50(local_88);
            }
            if ((uVar8 >> 10 & 1) != 0) {
              FUN_1001b7b04(local_88,"PC ");
              FUN_1001bbcfe(local_78,local_88);
              FUN_1001b7a50(local_88);
            }
            if ((uVar8 >> 0xb & 1) != 0) {
              FUN_1001b7b04(local_88,"AF ");
              FUN_1001bbcfe(local_78,local_88);
              FUN_1001b7a50(local_88);
            }
            if ((uVar8 >> 0xc & 1) != 0) {
              FUN_1001b7b04(local_88,"A# ");
              FUN_1001bbcfe(local_78,local_88);
              FUN_1001b7a50(local_88);
            }
            if ((uVar8 >> 0xd & 1) != 0) {
              FUN_1001b7b04(local_88,"aF ");
              FUN_1001bbcfe(local_78,local_88);
              FUN_1001b7a50(local_88);
            }
            if ((uVar8 >> 0xe & 1) != 0) {
              FUN_1001b7b04(local_88,"a# ");
              FUN_1001bbcfe(local_78,local_88);
              FUN_1001b7a50(local_88);
            }
            FUN_1001b7b04(local_88,")");
            FUN_1001bbcfe(local_78,local_88);
            FUN_1001b7a50(local_88);
            local_44 = FUN_1001b83ae(local_78);
            local_5e = lVar4 + 0x84;
            local_4a = uVar8 >> 4 & 0x1fff;
            local_68 = 0x404120502;
            local_60 = 0x822;
            local_56 = 0x800;
            local_4c = 0x400;
            local_46 = 0x822;
            local_54 = lVar4;
            __os_log_impl(0x100000000,uVar2,0x10,
                          "edit> WARN \'%{public}.4s\' %p in idle with pending track field changes 0x%x \'%{public}s\', flushing"
                          ,&local_68,0x2c);
            FUN_1001b7a50(local_78);
          }
          FUN_10031422c(lVar4);
        }
        FUN_100313e0b(lVar4);
        lVar6 = FUN_100315ede(lVar4);
        while (lVar6 != 0) {
          lVar7 = FUN_100316031(lVar6);
          FUN_100483f95(lVar6,0x7069646c,0);
          lVar6 = lVar7;
        }
        FUN_10058453f(lVar4,0,1);
        FUN_1002fbbfc(lVar4);
      }
      lVar4 = lVar5;
    } while (lVar5 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

