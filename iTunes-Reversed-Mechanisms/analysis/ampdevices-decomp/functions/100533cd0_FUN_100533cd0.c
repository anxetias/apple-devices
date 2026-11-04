// name: FUN_100533cd0
// address: 100533cd0

undefined8
FUN_100533cd0(void *param_1,uint param_2,short *param_3,long param_4,short *param_5,short *param_6,
             short *param_7,int param_8,char param_9,char param_10,char param_11,void *param_12)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  short *psVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 local_c78;
  char *local_c74;
  undefined2 local_c6c;
  char *local_c6a;
  short local_858 [256];
  short local_658 [256];
  short local_458 [256];
  short local_258 [256];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_12 == (void *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_100533e11;
    puVar6 = &local_c78;
    local_c78 = 0x8220202;
    local_c74 = "Assertion failure";
    local_c6c = 0x822;
    pcVar5 = "destSpec != nullptr";
LAB_1005340c9:
    *(char **)((long)puVar6 + 0xe) = pcVar5;
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",puVar6,0x16);
  }
  else if (param_1 == (void *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      puVar6 = &local_c78;
      local_c78 = 0x8220202;
      local_c74 = "Assertion failure";
      local_c6c = 0x822;
      pcVar5 = "rootFolderSpec != nullptr";
      goto LAB_1005340c9;
    }
  }
  else {
    cVar1 = FUN_10017fbfb(param_1);
    if (cVar1 == '\0') {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_c78 = 0x8220202;
        local_c74 = "Assertion failure";
        local_c6c = 0x822;
        local_c6a = "JRFileSpecIsDirectory( rootFolderSpec )";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_c78,0x16);
      }
      FUN_1001782e9(0,0);
      uVar3 = 0xffffff88;
      goto LAB_100533e1f;
    }
    _memcpy(param_12,param_1,0x420);
    uVar2 = FUN_100533c8e();
    local_258[0] = 0;
    local_458[0] = 0;
    local_658[0] = 0;
    local_858[0] = 0;
    if ((param_2 & 4) == 0) {
      if ((param_2 & 2) == 0) {
        if ((param_2 >> 10 & 1) != 0) {
          pcVar5 = "Home Videos";
LAB_100533eec:
          psVar4 = local_258;
          goto LAB_100533ef3;
        }
        if ((param_2 & 0x40) != 0) {
          FUN_1001e04f5("TV Shows",local_258);
          if (((param_7 != (short *)0x0) && (*param_7 != 0)) &&
             (FUN_1001e1c39(param_7,local_458), param_8 != 0)) {
            FUN_1001e04f5("Season ^1",local_658);
            FUN_1001e5722(local_658,local_658,param_8);
          }
          goto LAB_100533efb;
        }
        if ((param_2 & 8) == 0) {
          if ((param_2 & 0xc00000) == 0) {
            if ((param_2 >> 0x14 & 1) != 0) {
              pcVar5 = "Voice Memos";
              goto LAB_100533eec;
            }
            pcVar5 = "Apple Music";
            if (param_10 == '\0') {
              pcVar5 = "Music";
            }
            FUN_1001e04f5(pcVar5,local_258);
            if (param_9 == '\0') {
              if ((param_5 == (short *)0x0) || (*param_5 == 0)) {
                pcVar5 = "Unknown Artist";
                psVar4 = local_658;
                goto LAB_1005341f9;
              }
              FUN_1001e1c39(param_5,local_658);
            }
            else {
              pcVar5 = "Compilations";
              psVar4 = local_458;
LAB_1005341f9:
              FUN_1001e04f5(pcVar5,psVar4);
            }
            if ((param_6 == (short *)0x0) || (*param_6 == 0)) {
              FUN_1001e04f5("Unknown Album",local_858);
              goto LAB_100533efb;
            }
            psVar4 = local_858;
            param_3 = param_6;
            goto LAB_100533ede;
          }
          pcVar5 = "Books";
        }
        else {
          pcVar5 = "Audiobooks";
        }
        FUN_1001e04f5(pcVar5,local_258);
        if ((param_5 == (short *)0x0) || (*param_5 == 0)) goto LAB_100533efb;
        psVar4 = local_458;
        param_3 = param_5;
      }
      else {
        FUN_1001e04f5("Movies",local_258);
        if ((param_3 == (short *)0x0) || (*param_3 == 0)) goto LAB_100533efb;
        psVar4 = local_458;
      }
LAB_100533ede:
      FUN_1001e1c39(param_3,psVar4);
    }
    else {
      FUN_1001e04f5("Podcasts",local_258);
      if ((param_6 == (short *)0x0) || (*param_6 == 0)) {
        pcVar5 = "Unknown Podcast";
        psVar4 = local_458;
LAB_100533ef3:
        FUN_1001e04f5(pcVar5,psVar4);
      }
      else {
        FUN_1001e1c39(param_6,local_458);
      }
    }
LAB_100533efb:
    if (local_258[0] == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_100533b20(param_12,local_258,uVar2,param_11,param_12);
    }
    if (((int)uVar3 == 0) && (local_458[0] != 0)) {
      uVar3 = FUN_100533b20(param_12,local_458,uVar2,param_11,param_12);
    }
    if (((int)uVar3 == 0) && (local_658[0] != 0)) {
      uVar3 = FUN_100533b20(param_12,local_658,uVar2,param_11,param_12);
    }
    if (((int)uVar3 == 0) && (local_858[0] != 0)) {
      uVar3 = FUN_100533b20(param_12,local_858,uVar2,param_11,param_12);
    }
    if ((param_11 == '\0') || ((int)uVar3 != 0)) goto LAB_100533e1f;
    _memcpy(&local_c78,param_12,0x420);
    if (param_4 != 0) {
      uVar3 = FUN_10017ecc9(&local_c78,param_4,param_12,0);
      goto LAB_100533e1f;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      puVar6 = &local_58;
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      pcVar5 = "fileName != nullptr";
      goto LAB_1005340c9;
    }
  }
LAB_100533e11:
  FUN_1001782e9(0,0);
  uVar3 = 0xffffffce;
LAB_100533e1f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

