let component = ReasonReact.statelessComponent "Home";

let make ::router _children => {
  ...component,
  render: fun _self => {
    let goToUser event => {
      ReactEventRe.Mouse.preventDefault event;
      DirectorRe.setRoute router "/user/4";
    };
    <div>
      <h1> (ReasonReact.stringToElement "Home") </h1>
      <a href="#/user" onClick={goToUser}> (ReasonReact.stringToElement "User") </a>
    </div>
  }
};