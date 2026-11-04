// name: FUN_1005bc20a
// address: 1005bc20a

undefined8 FUN_1005bc20a(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  undefined8 local_34;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100170633(param_1,&cf_iPhone);
  uVar2 = 0x6950686e;
  if (cVar1 == '\0') {
    cVar1 = FUN_100170633(param_1,&cf_iPod);
    uVar2 = 0x69506f74;
    if (cVar1 == '\0') {
      cVar1 = FUN_100170633(param_1,&cf_iPad);
      uVar2 = 0x69506164;
      if (cVar1 == '\0') {
        cVar1 = FUN_100170633(param_1,&cf_AppleTV);
        uVar2 = 0x69545620;
        if (cVar1 == '\0') {
          cVar1 = FUN_100170633(param_1,&cf_Watch);
          uVar2 = 0x57617463;
          if (cVar1 == '\0') {
            cVar1 = FUN_100170633(param_1,&cf_AudioAccessory);
            uVar2 = 0x48506f64;
            if (cVar1 == '\0') {
              cVar1 = FUN_100170633(param_1,&cf_Mac);
              uVar2 = 0x4d616320;
              if (cVar1 == '\0') {
                cVar1 = FUN_100170633(param_1,&cf_MacBookAir);
                if (cVar1 == '\0') {
                  cVar1 = FUN_100170633(param_1,&cf_MacBookPro);
                  if (cVar1 == '\0') {
                    cVar1 = FUN_100170633(param_1,&cf_Macmini);
                    if (cVar1 == '\0') {
                      cVar1 = FUN_100170633(param_1,&cf_iMac);
                      if (cVar1 == '\0') {
                        cVar1 = FUN_100170633(param_1,&cf_iBridge);
                        uVar2 = 0x69427269;
                        if (cVar1 == '\0') {
                          cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
                          uVar2 = 0;
                          if (cVar1 != '\0') {
                            local_38 = 0x8420102;
                            local_34 = param_1;
                            __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                                                "unknown device class \"%{public}@\"",&local_38,0xc)
                            ;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

