// name: FUN_1001c37d1
// address: 1001c37d1

void FUN_1001c37d1(char param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 local_418 [1000];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != 0) {
    local_418[0] = 0;
    lVar2 = _CFStringCreateWithCStringNoCopy
                      (0,param_2,0x8000100,*(undefined8 *)PTR__kCFAllocatorNull_10082e028);
    if (lVar2 != 0) {
      lVar3 = _CFStringCreateWithFormatAndArguments(0,0,lVar2,param_3);
      if (lVar3 != 0) {
        cVar1 = _CFStringGetCString(lVar3,local_418,1000,0x8000100);
        puVar5 = local_418;
        if (cVar1 == '\0') {
          puVar4 = (undefined1 *)FUN_1001dfadb(lVar3);
          if (puVar4 != (undefined1 *)0x0) {
            puVar5 = puVar4;
          }
        }
        if (param_1 == '\0') {
          FUN_1001c35e7(puVar5,0);
        }
        else {
          _syslog_DARWIN_EXTSN(3,"%s",puVar5);
        }
        if (puVar5 != local_418) {
          FUN_1001c64c1(puVar5);
        }
        _CFRelease(lVar3);
      }
      _CFRelease(lVar2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

