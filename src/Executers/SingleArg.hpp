

/**
 * @brief executes single argument functions one after the other recursively
 * until only last one left at which point recursionj is broken
 */
template <typename Arg, typename Curr_Func, typename... Funcs>
void SingleArgExec(Arg args, Curr_Func curr_func, Funcs &&...funcs) {
  if constexpr (sizeof...(Funcs) == 0) {
    curr_func(args);
  } else {
    SingleArgExec(curr_func(args), funcs...);
  }
}
