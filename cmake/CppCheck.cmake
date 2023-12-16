find_program(CPPCHECK cppcheck)
if (NOT CPPCHECK)
  message(${WARNING_MESSAGE} "cppcheck requested but executable not found")
else()
  set(CPPCHECK_TEMPLATE "gcc")
  # Enable all warnings that are actionable by the user of this toolset
  # style should enable the other 3, but we'll be explicit just in case
  set(CMAKE_CXX_CPPCHECK
    ${CPPCHECK}
    --template=${CPPCHECK_TEMPLATE}
    --enable=style,performance,warning,portability
    --inline-suppr
    # We cannot act on a bug/missing feature of cppcheck
    --suppress=cppcheckError
    --suppress=internalAstError
    # if a file does not have an internalAstError, we get an unmatchedSuppression error
    --suppress=unmatchedSuppression
    # noisy and incorrect sometimes
    --suppress=passedByValue
    # ignores code that cppcheck thinks is invalid C++
    --suppress=syntaxError
    --suppress=preprocessorErrorDirective
    --inconclusive
    --std=c++${CMAKE_CXX_STANDARD})
    # warnings as errors
    list(APPEND CMAKE_CXX_CPPCHECK --error-exitcode=2)
endif()
