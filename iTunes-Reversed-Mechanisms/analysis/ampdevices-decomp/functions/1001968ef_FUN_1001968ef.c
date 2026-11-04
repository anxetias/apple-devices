// name: FUN_1001968ef
// address: 1001968ef

undefined8 FUN_1001968ef(long param_1,long param_2,char param_3,long param_4,long *param_5)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  undefined8 local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      FUN_100695ee8(uVar7);
    }
  }
  else if (param_2 == 0) {
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      FUN_100695e72(uVar7);
    }
  }
  else {
    if (param_5 != (long *)0x0) {
      *param_5 = 0;
      lVar2 = FUN_1001659f1(DAT_1008c4d90);
      if (lVar2 == 0) {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          FUN_100695d86(uVar7);
        }
LAB_100196b8e:
        uVar7 = 0xffffff94;
        local_80 = 0;
        lVar3 = 0;
        lVar4 = 0;
        lVar5 = 0;
LAB_100196bf2:
        FUN_1001782e9(0,0);
        FUN_10017060f(lVar4);
      }
      else {
        local_58 = *(undefined8 *)PTR__kCGImageDestinationLossyCompressionQuality_10082e828;
        local_78 = lVar2;
        if (param_3 == '\0') {
          uVar7 = 1;
          local_80 = 0;
        }
        else {
          local_80 = FUN_100169470(DAT_1008c4d90,1);
          if (local_80 == 0) {
            uVar7 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar7,0x10);
            if (cVar1 != '\0') {
              FUN_100695d10(uVar7);
            }
            goto LAB_100196b8e;
          }
          local_50 = &cf_kCGImageDestinationChromaSubSamplingX;
          local_48 = &cf_kCGImageDestinationChromaSubSamplingY;
          uVar7 = 3;
          local_70 = local_80;
          local_68 = local_80;
        }
        lVar3 = FUN_1001713ff(DAT_1008c4d90,&local_58,&local_78,uVar7,
                              PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                              PTR__kCFTypeDictionaryValueCallBacks_10082e140);
        if (lVar3 == 0) {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          uVar7 = 0xffffff94;
          if (cVar1 != '\0') {
            FUN_100695c9a(uVar6);
          }
          lVar3 = 0;
          lVar4 = 0;
          lVar5 = 0;
          goto LAB_100196bf2;
        }
        lVar4 = FUN_100170ea9(DAT_1008c4d90,0);
        if (lVar4 == 0) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 != '\0') {
            FUN_100695c24(uVar7);
          }
          lVar4 = 0;
LAB_100196bbe:
          uVar7 = 0xffffff94;
          lVar5 = 0;
          goto LAB_100196bf2;
        }
        lVar5 = _CGImageDestinationCreateWithData(lVar4,param_2,1,0);
        if (lVar5 == 0) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 != '\0') {
            FUN_100695bae(uVar7);
          }
          goto LAB_100196bbe;
        }
        _CGImageDestinationAddImageAndMetadata(lVar5,param_1,*(undefined8 *)(param_4 + 0x10),lVar3);
        cVar1 = _CGImageDestinationFinalize(lVar5);
        if (cVar1 == '\0') {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          uVar7 = 0x2346;
          if (cVar1 != '\0') {
            FUN_100695b38(uVar6);
          }
          goto LAB_100196bf2;
        }
        *param_5 = lVar4;
        uVar7 = 0;
      }
      FUN_10017060f(lVar5);
      FUN_10017060f(lVar3);
      FUN_10017060f(local_80);
      FUN_10017060f(lVar2);
      goto LAB_100196c27;
    }
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      FUN_100695dfc(uVar7);
    }
  }
  FUN_1001782e9(0,0);
  uVar7 = 0xffffffce;
LAB_100196c27:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

